#include<stdio.h>
int main()
{
	int n,p[20],wt[n],bt[20],ttat=0,twt=0,i;
	float atat,awt;
	printf("enter the number of process");
	scanf("%d",&n);
	printf("enter the process:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
    }
    printf("enter the process of brust time:\n");
    for(i=0;i<n;i++)
    {
		scanf("%d",&bt[i]);
	}
	
	wt[0]=0;
	for(i=1;i<n;i++)
	{
		wt[i]=wt[i-1]+bt[i-1];
	}
	for(i=0;i<n;i++)
	{
		twt+=wt[i];
		ttat+=(bt[i]+wt[i]);
	}
	printf("\ntotal turn around time of each process is %d\n",ttat);
	printf("\ntotal waiting time of each process is %d\n",twt);
	
	awt=twt/n;
	atat=ttat/n;
	printf("average waiting time is %f\n",awt);
	printf("average tat is %f\n",atat);
	return 0;
}
