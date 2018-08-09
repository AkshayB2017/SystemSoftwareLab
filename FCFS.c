#include<stdio.h>
#include<stdlib.h>
void main()
{  
  int n, burst[10],wait[10],tat[10],awt=0,avtat=0,i,j;
  printf("Enter total no of processes?");
  scanf("%d",&n);
  printf("Enter burst time for each process");
  for(i=0;i<n;i++)
  {   printf("burst[%d]",i+1);
      scanf("%d",&burst[i]);
  }
  wait[0]=0;
  for(i=1;i<n;i++)
  { wait[i]=0;
    for(j=0;j<i;j++)
    {  wait[i]+=burst[j];

    }
  }
  printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
  for(i=0;i<n;i++)
  { tat[i]=burst[i]+wait[i];
    awt+=wait[i];
    avtat+=tat[i];
    printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,burst[i],wait[i],tat[i]);
    

  } 
  awt/=i;
  avtat/=i;
  printf("\n\nAverage Waiting Time:%d",awt);
  printf("\nAverage Turnaround Time:%d",avtat);       
}