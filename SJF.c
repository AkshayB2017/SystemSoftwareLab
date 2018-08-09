#include<stdio.h>
void main()
{ int burst[10],p[10],wait[10],tat[10],i,j,n,total,pos,temp;
  float avg_wt, avg_tat;
  printf("Enter the number of processes");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {  printf("Burst time of process [%d]",i+1);
     scanf("%d",&burst[i]);
 }
  for(i=0;i<n;i++)
  {  pos=i;
      for(j=i+1;j<n;j++)
  { if(burst[j]<burst[pos])
      pos=j;
    }  temp=burst[pos];
     burst[pos]=burst[i];
     burst[i]=temp;

     temp=p[i];
     p[i]=p[pos];
     p[pos]=temp;
  }
  wait[0]=0;
  for(i=0;i<n;i++)
  { wait[i]=0;
    for(j=0;j<i;j++)
         wait[i]+=burst[j];
    total+=wait[i];
  }
  avg_wt=(float)total/n;
  total=0;
  printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
for(i=0;i<n;i++) 
{ tat[i]=burst[i]+wait[i];
  total+=tat[i];
  printf("\np%d\t\t  %d\t\t    %d\t\t\t%d",p[i],burst[i],wait[i],tat[i]);


}
avg_tat=(float)total/n;
printf("\n\nAverage Waiting Time=%f",avg_wt);
printf("\nAverage Turnaround Time=%f\n",avg_tat);
}
  
  
    
