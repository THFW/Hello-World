#include<stdio.h>
#define N 100
int main()
{	int i=0,b=0;
    char a[N];
	gets(a);
    for(i=0;i<N;i++)
	{
		if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
			b=b+1;
	}
	printf("%d",b);
    return 0;
}