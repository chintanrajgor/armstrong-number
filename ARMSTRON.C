#include<stdio.h>
#include<conio.h>
int main()
{
	int a,r,c,rev=0;
	printf("enter the value of number:");
	scanf("%d",&a);
	c=a;
	do{
		r=a%10;
		a=a/10;
		rev=rev+(r*r*r);
		}while(a!=0);
		if(c==rev)
		{
		printf("it is armstrong");
		}
		else
		{
		printf("it is not a armstrong");
		}
	getch();
return 0;
}
