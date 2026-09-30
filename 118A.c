#include<stdio.h>
int main()
{
	char word[100];
	scanf("%s", word);
	
	for(int i = 0; word[i] != '\0'; i++)
	{
		if(word[i] < 96)
		{
			word[i] += 32;
		}
		if(word[i] != 97 && word[i] != 	101 && word[i] != 105 && word[i] != 111 && word[i] != 117 && word[i] != 121)
		{
			printf(".%c", word[i]);
		}
	}
}
