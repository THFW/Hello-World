#include<stdio.h>
#define N 100
int main()
{char a[N];
    int b=0,i=0;
    gets(a);
	for(i=0;i<N;i++)
	{
		if(a[i]=='\0')
			break;
		else
			b++;
	}
	for(i=0;i<b;i++)
	{
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
			a[i]=a[i]+1;
	 printf("%c",a[i]);
	}
    return 0;
}