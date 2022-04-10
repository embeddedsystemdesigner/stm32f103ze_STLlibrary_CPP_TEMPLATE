#include "stm32f10x.h"
#include <iostream>



// telegram id --->    @eneeir
// github --->  https://github.com/embeddedsystemdesigner
// website  ---> www.enee.ir



using namespace std;

void delay_us(unsigned int time);
void delay_ms(unsigned int time);

template <typename T>
void Swap(T &number1, T &number2)
{
	T buffer;
	buffer = number1;
	number1 = number2;
	number2 = buffer;
}


int main (void)
{
char a='a',b='b';
int i=12,j=19;
float f=2.7,f2=1.9;	


Swap(a,b);
Swap(i,j);
Swap(f,f2);


cout<<"in this sample code i use template and swap two numbers"<<endl<<endl;
	
cout<<a<<"   "<<b<<endl;	
cout<<"***************"<<endl;	


cout<<i<<"   "<<j<<endl;	
cout<<"***************"<<endl;	


cout<<f<<"   "<<f2<<endl;	
cout<<"***************"<<endl;		
	
while(1)
	{

	}


	
}





void delay_us(unsigned int time)
{
	
	while(time--)	
		{
			
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();	
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();
		__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();	
    __NOP();__NOP();	

		}
	
}




void delay_ms(unsigned int time)
{
	
	while(time--)	
		{
			
    delay_us(1000);
			
		}

}



