#include <stdio.h>
#define M 100
struct tong{
     char   stunum[10];
     char name[10];
     int  score[3];
};
int main()
{
 struct   tong stu[M];
 int aa[M],bb[M];
 int i, N,a=0,b=0,c=0,max=0,t=0,n=0;
 scanf("%d",&N);
 for(i=0;i<N;i++)
 {
	 scanf("%s %s %d %d %d",stu[i].stunum,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
 }

for(i=0;i<N;i++)
{
	a=stu[i].score[0]+a;
	b=stu[i].score[1]+b;
	c=stu[i].score[2]+c;
}

printf("%d %d %d\n",a/N,b/N,c/N);

for(i=0;i<N;i++)
{
	 aa[i]=stu[i].score[0]+stu[i].score[1]+stu[i].score[2]; 
	 bb[i]=stu[i].score[0]+stu[i].score[1]+stu[i].score[2]; 
 }
 for(i=0;i<N; i++)
 {
	if(aa[i]>max)
	{
		t=max;
		max=aa[i];
		aa[i]=t;
	}
 }
 for(i=0;i<N;i++)
 {
	if(bb[i]==max)
	{
		printf("%s %s %d %d %d",stu[i].stunum,stu[i].name,stu[i].score[0],stu[i].score[1],stu[i].score[2]);
	}
 }
}