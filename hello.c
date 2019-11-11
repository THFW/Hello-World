#include<stdio.h>
#define SQ(a,b)  a=a-b;b=a+b;a=b-a;

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
	SQ(a,b);
	printf("%d %d\n",a,b);
    return 0;
}