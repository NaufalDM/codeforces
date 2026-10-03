#include<stdio.h>
int main()
{
	char a1[105];
	char a2[105];
	scanf("%s %s", a1, a2);
	
	for(int i = 0; a1[i] != '\0' ; i++)
	{
		if(a1[i] != a2[i])
		{
			printf("1");
		}
		else 
		{
			printf("0");
		}
	}
	
	printf("\n");
}
