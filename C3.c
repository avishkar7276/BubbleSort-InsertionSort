#include<stdio.h>
void asc(int *a,int n);
void generate(int *a,int n);
int main()
{
	int i,j,temp,a[1000],n,ch;
printf("Enter the n value :");
scanf("%d",&n);
do{
	generate(a,n);
	printf("\nThe randam number are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	
		printf("\t \t MENU");
		printf("\n1.Bubble sort in Ascending order\n2.Bubble sort in Descending order\n3.Exit");
		printf("\nEnter Choice");
		scanf("%d",&ch);
	
		switch(ch)
		{
			case 1:asc(a,n);
			       printf("\nAfter sorting :");
			       for(i=0;i<n;i++)
				       printf("%d\t",a[i]);
			       
			       break;
			case 2:asc(a,n);
			       printf("\nAfter sorting :");
			       for(i=n-1;i>=0;i--)
				       printf("%d\t",a[i]);     
			       
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

void asc(int *a,int n)
{
	int i,j,temp,s=1,sawpcnt=0,stepcnt=0;
stepcnt+=1;

	for(i=0;(i<n-1)&&(s==1);i++)
	{
stepcnt+=1;		
		s=0;
stepcnt+=1;
		for(j=0;j<n-i-1;j++)
{
stepcnt+=2;
if(a[j]>a[j+1])
			{
				s=1;
				sawpcnt+=1;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
stepcnt+=4;
			}

		}
stepcnt+=1;


	}
stepcnt+=1;
printf("\n\nThe swapcnt is %d",sawpcnt);
printf("\n\nThe stepcnt is %d",stepcnt);
}      
