#include<stdio.h>
void add(int,int);

main()
{
    int a,b;
	printf("\n enter numbers");
	scanf("%d%d",&a,&b);
	add(a,b);
}
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("addition=%d",c);
}
