#include<stdio.h>
int main()
{
	int a[26] = {0};
	int b[26] = {0};
	for(int i = 0; i<2 ; i++)
	{
		char word[105];
		scanf("%s", word);
		for(int j = 0; word[j] != '\0'; j++)
		{
			a[word[j] - 'A'] += 1;
		}
	} 
	
	char kata[105];
	scanf("%s", kata);
	for(int i = 0; kata[i] != '\0'; i++)
	{
		b[kata[i] - 'A'] += 1;
	}
	
	for(int j = 0 ; j<26 ; j++)
	{
		if(a[j] != b[j])
		{
			printf("NO");
			return 0;
		}
	}
	printf("YES");
}
