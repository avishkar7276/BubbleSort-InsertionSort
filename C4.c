#include<stdio.h>
int asc(int *a,int n);
int des(int *a,int n);
void generate(int *a,int n);
int main()
{
	int i,j,temp,a[100000],n=1000,ch;
do{	
generate(a,n);
	printf("\nThe randam number are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	
		printf("\t \t MENU");
		printf("\n1.insertio sort in Ascending order\n2.insertion sort in Descending order\n3.Exit");
		printf("\nEnter Choice");
		scanf("%d",&ch);
		int cnt;
		switch(ch)
		{
			case 1:cnt=asc(a,n);
			       printf("\nAfter sorting :");
			       for(i=0;i<n;i++)
				       printf("%d\t",a[i]);
			       printf("The key comparison is %d",cnt);			
       break;
			case 2:cnt=asc(a,n);
			       printf("\nAfter sorting :");
			       for(i=n-1;i>=0;i--)
				       printf("%d\t",a[i]);       
			       printf("The key comparison is %d",cnt);
			       break;
		}
	}while(ch!=3);
}
	void generate(int *a,int n)
	{
		int i;
		for(i=0;i<n;i++)
			a[i]=rand()%1000;
	}

	int asc(int *a,int n)
	{
	  int i,j,key,cnt=0,stepcnt=0;
stepcnt+=1;
		for(j=1;j<n;j++)
		{
stepcnt+=2;
			key=a[j];
			for(i=j-1;i>=0;i--)
			{
stepcnt+=2;
			  cnt+=1;
				if(a[i]>key)
					a[i+1]=a[i];
				else
					break;
			}
stepcnt+=1;
			a[i+1]=key;
stepcnt+=1;}
stepcnt+=1;
printf("The stepcnt is %d",stepcnt);
printf("The key comparison is %d",cnt);

	}
