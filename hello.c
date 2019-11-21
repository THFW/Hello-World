#include<stdio.h>
#define MAX(a,b,c)  if(a>b)\
					{max=a;}\
					else\
					{max=b;}\
					if(a>c)\
					{max=a;}\
					else\
					{max=c;}\
					if(b>c)\
					{max=b;}\
					else\
					{max=c;}
float maxx(float a,float b,float c);
int  main()
{
    float a,b,c,max=0,d;
    scanf("%f %f %f",&a,&b,&c);
	d=maxx(a,b,c);
	MAX(a,b,c);
	printf("%.3f\n",d);
	printf("%.3f\n",max);

    return 0;
}
float maxx(float a,float b,float c)
{	
	float max;
	if(a>b)
		max=a;
	else
		max=b;
	if(a>c)
		max=a;
	else
		max=c;
	if(b>c)
		max=b;
	else
		max=c;

	return max;
}