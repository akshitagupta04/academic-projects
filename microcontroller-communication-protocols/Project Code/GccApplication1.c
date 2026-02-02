
#define F_CPU 8000000UL
#include<avr/io.h>
#include<util/delay.h>
#include<string.h>
#define rs 0
#define rw 1
#define en 2
void lcdcmd(char );
void lcddata(char );
void init_lcd();
void databreak(char );
void cmdbreak(char );
void usart_init();
void process();
void welcom();
void rx();
void check();
void lcdstring(char *);
void txstring(char *);
void gsm();
int i,X=0,y=0,count=0,n=0;
char card1[13]="20002C6F5437";
char card2[13]="20002CC04E82";


char a[13];
int main()
{
	DDRA=0x8f;
	DDRC=0x00;  //entry sensor PC0 and exit sensor PC1
	usart_init();
	init_lcd();
	while(1)
	{
		process();
		cmdbreak(0x01);
	}
	return 0;
}
void process()
{
	welcom();
	rx();
	cmdbreak(0x01);
	check();
	
}
void welcom()
{
	lcdstring("show your card");
	cmdbreak(0xC0);
	lcdstring("Per. Count=");
	databreak(count+48);
}
void check()
{
//char ctrlz[]={26};
if(((strcmp(a,card1))==0)&&(X==0))
{
	lcdstring("WELCOME");
	cmdbreak(0xc0);
	lcdstring("SHARIQ");
	
	
	_delay_ms(10);
	
	X=1;
	
	PORTA=0x01;
	_delay_ms(2000);
	
	PORTA=0x00;
	while((PINC & (1<<PC0))==0);
	lcdstring(" ENTRY");
	while((PINC & (1<<PC0))==1);
	_delay_ms(500);
	PORTA=0X02;
	_delay_ms(2000);
	PORTA=0x00;
	count++;
	
}
else if(((strcmp(a,card1))==0)&&(X==1))
{
	lcdstring("THANK YOU");
	cmdbreak(0xc0);
	lcdstring("SHARIQ");
	
	
	_delay_ms(10);
	
	
	X=0;
	PORTA=0X04;
	_delay_ms(2000);
	PORTA=0x00;
	while((PINC & (1<<PC1))==0);
	lcdstring(" EXIT");
	while((PINC & (1<<PC1))==2);
	_delay_ms(500);
	PORTA=0X08;
	_delay_ms(5000);
	PORTA=0x00;
	count--;
}

else if (((strcmp(a,card2))==0)&&(y==0))
{
	lcdstring("WELCOME C2");
	cmdbreak(0xc0);
	lcdstring("AKSHAY");
	
	
	_delay_ms(10);
	
	
	y=1;
	PORTA=0X01;
	_delay_ms(2000);
	
	PORTA=0x00;
	while((PINC & (1<<PC0))==0);
	lcdstring(" ENTRY");
	while((PINC & (1<<PC0))==1);
	_delay_ms(500);
	
	PORTA=0X02;
	_delay_ms(2000);
	PORTA=0x00;
	
	count++;
}
else if (((strcmp(a,card2))==0)&&(y==1))
{
	lcdstring("Thank you");
	cmdbreak(0xc0);
	lcdstring("AKSHAY");
	
	
	_delay_ms(10);
	
	
	y=0;
	PORTA=0X04;
	_delay_ms(2000);
	
	
	PORTA=0x00;
	while((PINC & (1<<PC1))==0);
	lcdstring(" EXIT");
	while((PINC & (1<<PC1))==2);
	_delay_ms(500);
	
	PORTA=0X08;
	
	
	_delay_ms(2000);
	PORTA=0x00;
	count--;
}

else
{
	cmdbreak(0x01);
	lcdstring("ACCESS DENIED");
	cmdbreak(0xc0);
	lcdstring("TRY AGAIN");
	_delay_ms(1000);
	n++;
	if(n==3)
	
	PORTA|=0x80;
	_delay_ms(100);
	PORTA|=0x00;
	_delay_ms(100);

	gsm();


	
}
}
void rx()
{
	for(i=0;i<12;i++)
	{
		while((UCSRA&(1<<RXC))==0);
		a[i]=UDR;
	}
	a[i]='\0';
	
}
void lcdstring(char *p)
{
	while( *p !='\0')
	{
		databreak(*p);
		p++;
		//_delay_ms(100);
	}
}
void usart_init()
{
	UCSRB=UCSRB|(1<<TXEN)|(1<<RXEN);
	UCSRC=UCSRC|(1<<URSEL)|(1<<UCSZ1)|(1<<UCSZ0);
	UBRRL=0x33;
}

void init_lcd()
{
	DDRB=0xff;
	cmdbreak(0x02);
	cmdbreak(0x28);
	cmdbreak(0x0e);
	cmdbreak(0x06);
}
void lcdcmd(char x)
{
	PORTB=x;
	PORTB=PORTB&~(1<<rs);//rs=0==>select command reg
	PORTB=PORTB&~(1<<rw);//rw=0==>to write
	PORTB=PORTB|(1<<en);	//en is HIGH
	_delay_ms(1);
	PORTB=PORTB&~(1<<en);	//en is LOW
	_delay_ms(2);
}
void lcddata(char x)
{
	PORTB=x;
	PORTB=PORTB|(1<<rs);//rs=1==>select data reg
	PORTB=PORTB&~(1<<rw);//rw=0==>to write
	PORTB=PORTB|(1<<en);	//en is HIGH
	_delay_ms(1);
	PORTB=PORTB&~(1<<en);	//en is LOW
	_delay_ms(2);
}

void databreak(char x)
{
	lcddata(x&0xf0);
	lcddata(((x<<4)&0xf0));
}
void cmdbreak(char x)
{
	
	lcdcmd(x&0xf0);
	lcdcmd(((x<<4)&0xf0));
}

void txstring(char *s)
{
  while(*s)
  {
  	UDR=*s;
  	while( (UCSRA&(1<<UDRE))==0){}
    s++;
	_delay_ms(100);
  }
}
  void gsm()
{
   char ctrlz[]={26};
   //cmdbreak(0x01);
//lcdstring("message");
txstring("AT+CMGF=1\r");
_delay_ms(500);
txstring("AT+CMGS=\"9911790427\"\r");
_delay_ms(2000);
txstring("ALERT");
_delay_ms(200);
txstring(ctrlz);

}
