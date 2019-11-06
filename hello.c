#include<stdio.h>
#include <string.h>
#define N 80
int main()
{	int i,j,n=0,m=0,c=0,d=0;
    char a[N][N] ,b[]="End of file";
	gets(a[c]);

	while(strcmp(a[c], "End of file")&&(c<N))
	{	 c++;
		 d++;
		 gets(a[c]);		 
	} 
	for(c=0;c<d;c++)
	{
			  n=0;
			  for(i=0;i<N;i++)
			  {
				if(a[c][i]=='\0')
					break;
				else if(!((a[c][i]>='0'&&a[c][i]<='9')||a[c][i]==' '||(a[c][i]>='A'&&a[c][i]<='Z')||(a[c][i]>='a'&&a[c][i]<='z')))
					return 0;
				else
					n=n+1;
			  }
			    m=0;
				for(i=0;i<n;i++)
				{	  
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
						 i=i-1;
					  }			  
				}	 	
		for(i=0;i<(n-m);i++)
		{
			printf("%c",a[c][i]);
		}
		printf("\n");
	}	
    return 0;
}


#if 0
	for(c=0;c<N;c++)
	{
		 gets(a[c]);
		 
		 if(!strcmp(a[c], "End of file"))
		 {
			 break;		 
		 }else{d++;}
	}
//#else
	while(strcmp(a[c], "End of file"))
	{	 c++;
		 gets(a[c]);
		 
		 d++;
	}
#endif