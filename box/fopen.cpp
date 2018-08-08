#include<iostream>
#include<cstdio>
#include<string>
#define SIZE 99999

using namespace std;

int main(void)
{
	int coef[SIZE], exp[SIZE], x, y, z;
	FILE * fp;
	char name[100];
	for(int i = 0; i <= SIZE; i++)
	{
		exp[i] = 0;
 	}
 	cin >> name;
 	fp = fopen(name,"r");   
 	if (fp == NULL) printf("Error opening file.");
 	else
 	{	
 		while ( ! feof (fp) )
     	{
	       	fscanf(fp,"%d%d",&x, &y);
			exp[y] = y;
			coef[y] += x;
     	}
    	fclose (fp);	
	}
	cin >> name;
 	fp = fopen(name,"r");   
 	if (fp == NULL) printf("Error opening file.");
 	else
 	{	
 		while ( ! feof (fp) )
     	{
	       	fscanf(fp,"%d%d",&x, &y);
			exp[y] = y;
			coef[y] += x;
     	}
    	fclose (fp);	
	}
	fp = fopen("c.txt","w"); 
	for(int i = SIZE; i > 0; i--)
	{
		if(exp[i] != 0)
		{
			if(z > 0)(coef[i] > 0) ? fprintf(fp,"+") : fprintf(fp,"");
			fprintf(fp,"%dX%d",coef[i], exp[i]);
			z++;
		}
		else continue;
	}
	if(coef != 0)fprintf(fp,"%d",coef[0]);
	fclose(fp);
	return 0;
}
