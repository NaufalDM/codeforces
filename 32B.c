#include<stdio.h>
int main()
{
	char word[205];
	scanf("%s", word);
	
	for(int i = 0; word[i] != '\0'; i++)
	{
		if(word[i] == '.')
		{
			printf("0");
		}
		else
		{
			i++;
			if(word[i] == '.')
			{
				printf("1");
			}
			else
			{
				printf("2");
			}
		}
	}
}
