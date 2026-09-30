#include<stdio.h>
int main ()
{
	int n, count = 0;
	scanf("%d", &n);
	char word[n];
	scanf("%s", word);
	
	for(int i = 0 ; word[i] != '\0'; i++)
	{
		if(word[i] == 65)
		{
			count++;
		}
	}
	
	if (count*2 > n)
	{
		printf("Anton");
	}
	else if(count*2 <n)
	{
		printf("Danik");
	}
	else
	{
		printf("Friendship");
	}
	return 0;
}
