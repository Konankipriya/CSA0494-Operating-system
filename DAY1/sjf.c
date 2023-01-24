#include<stdio.h>
int main()
{
	int n,p[20],bt[20],wt[20],twt=0,ttat=0,i,temp,pos,j;
	float awt,atat;
	printf("enter the number of process:");
	scanf("%d",&n);
	printf("enter the process of brust time:");
	for(i=0;i<n;i++)
	{
		printf("p%d ",i+1);
		scanf("%d",&bt[i]);
		p[i]=i+1;
	}
	for(i=0;i<n;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
		   if(bt[j]<bt[pos])
		   	pos=j;
	    }
		temp=bt[i];
		bt[i]=bt[pos];
		bt[pos]=temp;
			
		temp=bt[i];
		p[i]=p[pos];
		p[pos]=temp;	
	}
	wt[0]=0;
	for(i=1;i<n;i++)
	{
		wt[i]=0;
		for(j=0;j<i;j++)
		  wt[i]+=bt[j];	
		twt+=wt[i];
	}
	for(i=0;i<n;i++)
	{
		ttat+=(wt[i]+bt[i]);
	}
	printf("\n twt =%d",twt);
	printf("\n ttat=%d ",ttat);
	
	awt=twt/n;
	atat=ttat/n;
	printf("\n average wt = %f",awt);
	printf("\n average tat=%f",atat);
return 0;
}
