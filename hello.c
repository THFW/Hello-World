#if 1
#include<stdio.h>
#define N 100
int main()
{	int i;
    char a[N],b;
    gets(a);
	for(i=0;i<N;i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{	
			
			a[i]=a[i]+32;	
			
		}
		else if(a[i]=='\0')
			break;

	}
	
	for(i=0;i<N;i++)
		if(a[i]=='\0')
			break;
		else
			printf("%c",a[i]);

    return 0;
}
#else
#include<stdio.h>
int main()
{
    char a[3]={'A','B','C'},b;
    printf("%d %c",'a',a[1]+32);
    return 0;
}
#endif