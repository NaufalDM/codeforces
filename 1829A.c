#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		char word[11];
		scanf("%s", word);
		char code[] = "codeforces";
		int tot = 0;
		
		for(int i = 0; i<10 ; i++)
		{
			if(word[i] != code[i])
			{
				tot++;
			}
		}
		printf("%d\n", tot);
	}
}
