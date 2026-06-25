#include <reg51.h>      

sbit LIGHT = P1^0;      
sbit FAN   = P1^1;      

void uart_init(void);
void uart_send(unsigned char ch);
unsigned char uart_receive(void);
void serial_isr(void);

void uart_init(void)
{
    SCON  = 0x50;       
    TMOD  = 0x20;       
    TH1   = 0xFD;       
    TL1   = 0xFD;       
    PCON  = 0x00;       
    TR1   = 1;          

    ES    = 1;          
    EA    = 1;          
}

void uart_send(unsigned char ch)
{
    SBUF = ch;          
    while (TI == 0);    
    TI = 0;             
}

unsigned char uart_receive(void)
{
    while (RI == 0);    
    RI = 0;             
    return SBUF;        
}

void serial_isr(void) interrupt 4
{
    unsigned char cmd;

    if (RI == 1)                
    {
        RI  = 0;                
        cmd = SBUF;             

        switch (cmd)
        {
            case 'A':           
                LIGHT = 1;
                break;

            case 'a':           
                LIGHT = 0;
                break;

            case 'B':           
                FAN = 1;
                break;

            case 'b':           
                FAN = 0;
                break;

            case 'C':           
                LIGHT = 1;
                FAN   = 1;
                break;

            case 'c':           
                LIGHT = 0;
                FAN   = 0;
                break;

            default:
                break;          
        }
    }
}

void main(void)
{
    
    LIGHT = 0;
    FAN   = 0;
    P1    = 0x00;       

    
    uart_init();

    
    while (1)
    {
        
    }
}
