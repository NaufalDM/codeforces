#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		char word[100];
		scanf("%s", word);
		int panjang = strlen(word);
		if(panjang>10)
		{
			printf("%c%d%c \n", word[0], panjang - 2, word[panjang - 1]);
		}
		else
		{
			printf("%s \n", word);
		}
	}
}
