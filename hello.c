#include<stdio.h>
#define LEAP_YEAR(y)  if(((y%4==0)&&(y%100!=0))||(y%400==0))\
					  {\
						  printf("L");\
					  }\
					  else\
					  {\
						  printf("N");\
					  }
int main()
{
    int a;
    scanf("%d",&a);
	LEAP_YEAR(a);

    return 0;
}