// Sorted By name 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
	int i=0;
	FILE *fp;
	if((fp=fopen("sortdemp1.txt","w"))!=NULL)
		for(i=0;i<n;i++)
			fprintf(fp,"%s\t\t%d\t\t%d\t\t\n",emp[i].name,emp[i].age,emp[i].sal);
}

int sort(int n)
{
	struct record  t;
	int i,j;
for(j=0;j<n;j++)
{	
for(i=0;i<n-1-j;i++)
	{

		if(strcmp(emp[i].name,emp[i+1].name)>=0)
		{
			t=emp[i];
			emp[i]=emp[i+1];
			emp[i+1]=t;
		}
	}

}
}
/* Before sorted 

Omkar		45		12300
Prathmesh	12		12000
Avishkar	19		192300
Aniket		20		1200

after sorted 

Aniket		20		1200		
Avishkar	19		192300		
Omkar		45		12300		
Prathmesh	12		12000	
*/
