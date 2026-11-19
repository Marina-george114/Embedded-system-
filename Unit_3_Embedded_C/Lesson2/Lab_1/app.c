#include<uart.h>
unsigned char  string_buffer[100] ="Marina";
unsigned char const string_buffer2[100] ="Marina_George";
void main(void){
	Uart_Send_String (string_buffer);
    
}