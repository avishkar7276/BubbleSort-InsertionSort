//  Sorted By age 

#include<stdio.h>
#include<stdlib.h>

typedef struct record{
	char name[20];
	int age;
	int sal;
}rec;
rec emp[100];
int main()
{


	int n;
	n=readFile();
	sort(n);
	avishkar(n);
}

int readFile()
{
	int i=0;
	printf("\nReading the emp.txt file");
	FILE *fp;
	if((fp=fopen("emp.txt","r"))!=NULL)
		while(!feof(fp))
		{
			fscanf(fp,"%s%d%d",emp[i].name,&emp[i].age,&emp[i].sal);
			i++;
		}
	return i-1;
}

int avishkar(int n)
{
	printf("\nStoring the data in sortedemp.txt file\n\n\n");
	int i=0;
	FILE *fp;
	if((fp=fopen("sortdemp.txt","w"))!=NULL)
		for(i=0;i<n;i++)
			fprintf(fp,"%s\t%d\t%d\n",emp[i].name,emp[i].age,emp[i].sal);
}

int sort(int n)
{
	printf("\n\nStart Sorting ....");
	struct record  t;
	int i,j;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
		if(emp[j].age>emp[j+1].age)
		{
			t=emp[j];
			emp[j]=emp[j+1];
			emp[j+1]=t;
		}
	}
}
}
/* Output
Befoer sort 

Omkar		45		12300
Prathmesh	12		12000
Avishkar	19		192300
Aniket		20		1200

after sorted 

Prathmesh	12	12000
Avishkar	19	192300
Aniket		20	1200
Omkar		45	12300
*/
