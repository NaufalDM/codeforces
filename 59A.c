#include<stdio.h>
#include<string.h>
int main ()
{
	char word[110];
	scanf("%s", word);
	int panjang = strlen(word);
	int count = 0;
	
	for(int i = 0 ; word[i] != '\0' ; i++)
	{
		if(word[i] > 96)
		{
			count++;
		}
	}
	
	if(count*2 >= panjang)
	{
		for(int j = 0 ; word[j] != '\0' ; j++)
		{
			if(word[j] < 96)
			{
				word[j] += 32;
			}
		}
	}
	else
	{
		for(int j = 0 ; word[j] != '\0' ; j++)
		{
			if(word[j] >= 97)
			{
				word[j] -= 32;
			}
		}
	}
	
	printf("%s", word);
}
