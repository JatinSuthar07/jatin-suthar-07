
#include<stdio.h>

struct round
{
int p,at,bt,wt,tat,ct,pr,st;
}r[50];
int tt=0,awt=0;
main()
{
int i,j,min,k,n,c,t,tq,b,a,rt[50];
printf("\nEnter the no. of process ");
scanf("\t%d",&n);
c=n;
for(i=0;i<n;i++)
{
r[i].p=i+1;
r[i].st=2;
printf("\narival time   P%d :\t",i+1);
scanf("\t%d",&r[i].at);
printf(" Burst time  P%d :\t",i+1);
scanf("\t%d",&r[i].bt);
rt[i]=r[i].bt;
printf(" Priority   P%d :\t",i+1);
scanf("\t%d",&r[i].pr);
}
printf("\n\n\nEnter the time quantum");
scanf("\t%d",tq);
min=r[0].at;
for(i= 1;i<n;i++)
{
	if(r[i].at<min)
	{
		min=r[i].at;
		k=i;
	}
	if(r[i].at==min)
	{
		r[i].st=1;
	}
}
for(t=min;c!=0;)
{
for(i=0;i<n;i++)
{
	if(r[i].at<=t)
	{
		r[i].st=1;
	}
	if(r[i].pr>a && r[i].st==1)
	{
		a=i;
	}
}
if(rt[a]<=tq&&rt[a]>0)
{
	t=t+rt[a];
	rt[a]=0;
	r[a].st=1;
}
else if(rt[a]>0)
{
	rt[a]=rt[a]-tq;
	t=t+tq;
}
if(rt[a]==0 && r[a].st==1)
{
	c--;
	r[a].ct=t;
	r[a].tat=t-r[a].at;
	r[a].wt=r[a].tat-r[a].bt;
	tt=tt+r[a].tat;
	awt=awt+r[a].wt;
	printf("P%d\t%d\t%d\t%d\t%d\t%d\t%d",a+1,r[a].at,r[a].bt,r[a].pr,r[a].ct,r[a].tat,r[a].wt);
	r[a].st=0;
}
}
printf("average turn around time is \t%d",tt/n);
printf("average waiting time is \t%d",awt/n);
}
