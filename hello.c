#include<stdio.h>
#include <string.h>
#define N 80
int main()
{	int ac=1,bc=2,i,j,n=0,m=0,c=0,d=0;
    char a[N][N] ,b[]="End of file";
	gets(a[c]);
#if 0
	for(c=0;c<N;c++)
	{
		 gets(a[c]);
		 
		 if(!strcmp(a[c], "End of file"))
		 {
			 break;		 
		 }else{d++;}
	}
#else
	while(strcmp(a[c], "End of file"))
	{
		 gets(a[c]);
		 
		 d++;
	}
#endif
	for(c=0;c<d;c++)
	{
		  n=0;
			  for(i=0;i<N;i++)
			  {
				if(a[c][i]=='\0')
					break;
				else
				  n=n+1;
			  }

				for(i=0;i<n;i++)
				{	  m=0;
					  if(a[c][i]==' ')
					  {
						 m=m+1;
						 for(j=i;j<n;j++)
						 {
				 			 if(a[c][i]!='\0')
							 {
			   					 a[c][j]=a[c][j+1];
							 }
						 }
					  }			  
					}
	 	
		for(i=0;i<=(n-m);i++)
		{
			printf("%c",a[c][i]);
		}
		printf("\n");
	}
	
    return 0;
}