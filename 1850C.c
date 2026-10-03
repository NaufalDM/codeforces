#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		char c , word[100] = {0} ;
		int a = 0;
		for(int i = 0; i<8 ; i++)
		{
			for(int j = 0; j<8; j++)
			{
				scanf(" %c", &c);
				if(c != '.')
				{
					word[a] = c;
					a++;
				}
			}
		}
		printf("%s \n", word);
	}
}
