#include<stdio.h>


struct round
{
int p,at,bt,wt,tat,ct,pr;
}r[50];

main()
{
int min,maxp=0,k,n,c=0,t=0,tq,rt[50],rq[50],l=0;
printf("\nEnter the no. of process ");
scanf("\t%d",&n);
for(int i=0;i<n;i++)
{
r[i].p=i+1;
printf("\nEnter the arival time for process  %d : ",i+1);
scanf("\t%d",&r[i].at);
printf("Enter the Burst time for process  %d : ",i+1);
scanf("\t%d",&r[i].bt);
t=t+r[i].bt;
rt[i]=r[i].bt;
printf("Enter the Priority for process  %d : ",i+1);
scanf("\t%d",&r[i].pr);
}
printf("\n\n\nEnter the time quantum");
scanf("\t%d",tq);
min=r[0].at;
for(int i= 1;i<n;i++)
{
	if(r[i].at<min)
	{
		min=r[i].at;
		k=i;
	}
	if(r[i].at==min)
	{
		rq[l]=i;
		l++;
	}s
}
for(int i=0;i<l;i++)
{
	if(r[i].pr>maxp)
	{
		maxp=r[i].pr;
		
	}
}
}

