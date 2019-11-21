#include<stdio.h>
#include <math.h>
#define S(a,b,c)		(a+b+c)/2
#define AREA(a,b,c,S)	sqrt(S*(S-a)*(S-b)*(S-c))
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);

	printf("%.3f",AREA(a,b,c,S(a,b,c)));

    return 0;
}