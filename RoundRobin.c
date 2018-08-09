#include<stdio.h>
void main()
{ int count,j,n,time,remain,flag=0,time_quantum; 
  int wait_time=0,turnaround_time=0,at[10],bt[10],rt[10]; 
  printf("Enter total processes?");
  scanf("%d",&n);
  remain=n;
  for(count=0;count<n;count++)
  { printf("Enter arrival and burst time for processes:");
  scanf("%d:",&at[count]);
  scanf("%d",&bt[count]);
  rt[count]=bt[count];


  }
 printf("Enter time quantum:\t");
 scanf("%d",&time_quantum);
 printf("\n\nProcess\t|Turnaround Time|Waiting Time\n\n"); 
 for(time=0,count=0;remain!=0;)
 {
     if(rt[count]<=time_quantum && rt[count]>0)
 {
     time+=rt[count];
     rt[count]=0;
     flag=1;
 }
 }