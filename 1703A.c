#include<stdio.h>
int main()
{
	int t;
	scanf("%d" , &t);
	while(t--)
	{
		char word[5];
		scanf("%s", word);
		
		for(int i = 0; word[i] !='\0'; i++)
		{
			if(word[i] < 96)
			{
				word[i] += 32;
			}
		}
		
		if(word[0] == 'y' && word[1] == 'e' && word[2] == 's')
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}
