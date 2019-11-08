#include <stdio.h>
#define M 100
struct tong{
     char   stunum[10];
     char name[10];
     int  score[3];
};
void input_file(struct tong p[M],int N);
void print_file(struct tong q[M],int N);
int main()
{
 struct   tong stu[M];
 int N;
 scanf("%d",&N);
 input_file(stu,N);
 print_file(stu,N);
}

void input_file(struct tong p[M],int N)
{int i;
 for(i=0;i<N;i++)
 {
	 scanf("%s %s %d %d %d",p[i].stunum,p[i].name,&p[i].score[0],&p[i].score[1],&p[i].score[2]);
 }
}
void print_file(struct tong q[M],int N)
{int i;
 for(i=0;i<N;i++)
 {
		printf("%s,%s,%d,%d,%d\n",q[i].stunum,q[i].name,q[i].score[0],q[i].score[1],q[i].score[2]);
 }
}