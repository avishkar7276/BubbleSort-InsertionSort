#include<stdio.h>
void asc(int *a,int n);
int des(int *a,int n);
void generate(int *a,int n);
int main()
{
	int i,j,temp,a[1000],n,ch;
	//generate(a,n);
	printf("\nEnter n values :");
	scanf("%d",&n);
	printf("\nThe number are:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	do{
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
			case 2:des(a,n);
			       printf("\nAfter sorting :");
			       for(i=n-1;i>=0;i--)
				       printf("%d\t",a[i]);       

			       break;

		}
	}while(ch!=3);
}
void asc(int *a,int n)
{
	int i,j,temp,s=1,s1=0,f=0,k,a1=1;


	for(i=0;(i<n-1)&&(s==1);i++)
	{		
		s=0;

		for(j=0;j<n-i-1;j++)
		{

			
			if(a[j]>a[j+1])
			{
				s=1;
				s1+=1;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				f=1;
			}

printf("\npass are =%d\n",a1++);
			for(k=0;k<n;k++)
			{	
printf("%d\t",a[k]);
}
		}

	}


}
int des(int *a,int n)
{
	int i,j,temp,s=1,f=0;

	for(i=0;(i<n-1)&&(s==1);i++)
	{
		s=0;
		for(j=0;j<n-i-1;j++)
		{
                        printf("pass =%d\n",i);
			if(a[j]>a[j+1])
			{
				s=1;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				f=1;                        
			}
			if(f==0)
				break;
		}
	}

}

