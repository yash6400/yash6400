#include<stdio.h>
#define bits sizeof(int)*8
int main()
{
	int num,msb;
	printf("enter the value of n");
	scanf("%d",&num);
	msb=1 << (bits-1);
	if(num & msb )   
	{
	   printf("MSB of %d is set (1).", num);
    }                            
    else
    {
      printf("MSB of %d is unset (0).", num);
	}
}