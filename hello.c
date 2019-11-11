#include<stdio.h>
#define SQ(a,b)  ((a)%(b))
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
	printf("%d\n",SQ(a,b));
    return 0;
}