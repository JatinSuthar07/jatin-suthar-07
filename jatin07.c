#include<stdio.h>
struct round
{
int p,at,bt,wt,tat,ct,pr,st,f;
}r[50];
float tt=0,awt=0;
main()
{
int i,j,min,b,k,n,c,t,tq,a,rt[50],minp,maxp,g=0;
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
r[i].f=0;
}
printf("Q)");
printf(" Process  \tAT\tBT\tPR");
for(i=0;i<n;i++)
{
printf("\n     P%d  \t%d  \t%d  \t%d",i+1,r[i].at,r[i].bt,r[i].pr);
}
printf("\n\n\nEnter the time quantum");
scanf("\t%d",&tq);
min=r[0].at;
minp=r[0].at;
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
printf("\nProcess\t\tAT\tBT\tPR\tCT\tTAT\tWT");
for(t=min;c!=0;)
{	

for(i=0;i<n;i++)
{
	if(r[i].f>n && r[1].st==1)
{
	r[i].pr+=2;
	r[i].f--;
}
	if(r[i].at<=t && r[i].st!=0)
	{
		r[i].st=1;
	}
	if(r[i].pr<=minp && r[i].st==1)
	{
		minp=r[i].pr;
	}
	if(r[i].pr>=maxp && r[i].st==1)
	{
		maxp=r[i].pr;
		a=i;
	}
}
if(rt[a]<=tq&&rt[a]>0)
{
	t=t+rt[a];
	rt[a]=0;
	r[a].st=1;
	r[a].f=0;
}
else if(rt[a]>0)
{
	rt[a]=rt[a]-tq;
	t=t+tq;
	if(r[a].f>0)
		r[a].f=r[a].f-1;
	
}
for(j=0;j<n;j++)
{
	if(j!=a && r[j].st==1)
	{
		r[b].f=r[b].f+1;		
	}
}
if(rt[a]==0 && r[a].st==1)
{
	c--;
	r[a].ct=t;
	r[a].tat=t-r[a].at;
	r[a].wt=r[a].tat-r[a].bt;
	tt=tt+r[a].tat;
	awt=awt+r[a].wt;
	printf("\n  P%d \t\t%d  \t%d  \t%d  \t%d   \t%d  \t%d",a+1,r[a].at,r[a].bt,r[a].pr,r[a].ct,r[a].tat,r[a].wt);
	r[a].st=0;
}


maxp=minp;
}
printf("\n\naverage Turn-Tround-Time is \t%0.2f",tt/n);
printf("\naverage Waiting-Time is \t%0.2f",awt/n);
}
