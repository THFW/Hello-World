#include<stdio.h>
#include<string.h>
#define N 100

int main()
{
    int a,b;
	char str1[N],str2[N],str[N];
	gets(str1);
	gets(str2);
    strcat(str1,str2);
	printf("%s",str1);
    return 0;
}