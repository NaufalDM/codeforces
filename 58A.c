#include<stdio.h>
int main()
{
	char word[110];
	scanf("%s", word);
	int count = 0;

	for(int i = 0; word[i] != '\0'; i++)
	{
		if(word[i] == 'h' && count == 0)
		{
			count++;
		}
		else if(count == 1 && word[i] == 'e')
		{
			count++;
		}
		else if(count == 2 && word[i] == 'l')
		{
			count++;
		}
		else if(count == 3 && word[i] == 'l')
		{
			count++;
		}
		else if(count == 4 && word[i] == 'o')
		{
			count++;
		}
	}
	if(count == 5)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
