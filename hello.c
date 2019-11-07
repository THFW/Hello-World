#include<stdio.h>
struct tong {
	int 	year;
	int		month;
	int		day;
};
int main()
{
    int d,dsum;
    struct tong ss;
	scanf("%d %d %d",&ss.year,&ss.month,&ss.day);
	switch(ss.month)
	{
	case 1: d=ss.day;
		break;
	case 2: d=31+ss.day;
    case 3:	d=31+ss.day;
		break;
	case 4: d=31+31+ss.day;
		break;
	case 5: d=31+31+30+ss.day;
		break;
	case 6: d=31+31+30+31+ss.day;
		break;
    case 7: d=31+31+30+31+30+ss.day;
		break;
	case 8: d=31+31+30+31+30+31+ss.day;
		break;
	case 9: d=31+31+30+31+30+31+31+ss.day;
		break;
	case 10:d=31+31+30+31+30+31+31+30+ss.day;
		break;
    case 11:d=31+31+30+31+30+31+31+30+31+ss.day;
		break;
	case 12:d=31+31+30+31+30+31+31+30+31+30+ss.day;
		break;
	default:printf("error");
	}
	
	if(ss.month>2){
	if((ss.year%4==0&&ss.year%100!=0)||ss.year%400==0)
	{
		dsum=29+d;
	}
	else
	{
		dsum=28+d;
	}
	}
	else
	{
		dsum=d;
	}
	printf("%d",dsum);
    return 0;
}