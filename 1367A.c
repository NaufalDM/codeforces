#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d" , &t);
	while(t--)
	{
		char word[105];
		scanf("%s", word);
		int panjang = strlen(word) - 1;
		for(int i = 0; i< panjang;i+=2)
		{
			printf("%c", word[i]);
		}
		printf("%c \n",word[panjang]);
	}
}
