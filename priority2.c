#include<stdio.h>
int n,i,j,pos;
int bt[20],tat[20], wt[20],priority[20];
float avg_wt=0, avg_tat=0;
int main(){
    printf("Enter number of processes: ");
    scanf("%d", &n);
    printf("Enter burst time for each process:\n");
    for (i = 0; i < n; i++) {
        printf("Process %d and priority: ", i + 1);
        scanf("%d %d", &bt[i],&priority[i]);
    }
    for(int i=0;i<n;i++){
        pos=i;
        for(int j=i+1; j<n;j++){
            if(priority[j]<priority[i]){
                pos=j;
            }
        }
        int temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;

        temp=priority[i];
        priority[i]=priority[pos];
        priority[pos]=temp;
        
    }
    wt[0]=0;
    for(int i=1; i<n;i++){
        wt[i]=wt[i-1]+bt[i-1];
    }

    for(int i=0; i<n; i++){
        tat[i]=wt[i]+bt[i];
        avg_wt+=wt[i];
        avg_tat+=tat[i];
    }
    avg_wt/=n;
    avg_tat/=n;

    printf("Process\tBurst Time\tPriority\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", i + 1, bt[i], priority[i], wt[i], tat[i]);
    }
    printf("The average waiting time is: %.2f \n",avg_wt);
    printf("The average turn Around time is: %.2f\n", avg_tat);
}

