#include <stdio.h>
#include <stdlib.h>

int asc(int *a,int n);
int des(int *a,int n);
void generate(int *a,int n);
int main()
{
	int i,j,temp,a[1000],n,ch;
	printf("Enter The n value");
	scanf("%d",&n);
	generate(a,n);
	printf("\nThe randam number are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
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
void generate(int *a,int n)
{
int i;
for(i=0;i<n;i++)
a[i]=rand()%1000;
}

int asc(int *a,int n)
{
	int i,j,temp,s=1;
	

	for(i=0;(i<n-1)&&(s==1);i++)
	{		
		s=0;
		for(j=0;j<n-i-1;j++)
		{if(a[j]>a[j+1])
			{
				s=1;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
			}

		}


	}
}
int des(int *a,int n)
{
        int i,j,temp,s=1;

        for(i=0;(i<n-1)&&(s==1);i++)
        {
                s=0;
                for(j=0;j<n-i-1;j++)
                {
                        if(a[j]>a[j+1])
                        {
				s=1;
                                temp=a[j];
                                a[j]=a[j+1];
                                a[j+1]=temp;
                        }

                }
        }
     
}

/* Output
[sy44016@cs13 ASS1]$ cc A1.c
[sy44016@cs13 ASS1]$ ./a.out
Enter The n value          
10

The randam number are:
383     886     777     915     793     335     386     492     649     421      MENU
1.Bubble sort in Ascending order
2.Bubble sort in Descending order
3.Exit
Enter Choice1

After sorting :335      383     386     421     492     649     777     793    886      915                      MENU
1.Bubble sort in Ascending order
2.Bubble sort in Descending order
3.Exit
Enter Choice2

After sorting :915      886     793     777     649     492     421     386    383      335                      MENU
1.Bubble sort in Ascending order
2.Bubble sort in Descending order
3.Exit
Enter Choice3
*/
