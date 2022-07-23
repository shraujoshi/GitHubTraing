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
	else
	{
		printf("chracter is not alphabet");
	}
}
