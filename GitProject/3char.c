#include<stdio.h>
main()
{
	int c;
	printf("enter any character");
	scanf("%c",&c);
	if((c>='a' && c<='z') || (c>='A' && c<='Z'))
	{
		printf("\ncharacter is alphabet");
	}
	else if(c>='0' && c<='9')
	{
		printf("chracter is digit");
	}
	else
	{
		printf("is special character");
		
	}
}
