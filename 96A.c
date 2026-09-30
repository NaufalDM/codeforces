#include<stdio.h>
int main()
{
	char word[100];
	scanf("%s", word);
	int temp = word[0];
	int count = 1;
	int ctemp = 1;
	
	for(int i= 1; word[i] != '\0' ; i++)
	{
		
		if(word[i] == temp)
		{
			ctemp++;
			if(ctemp > count)
			{
				count = ctemp;
			}
		}
		else 
		{
			ctemp = 1;
			temp = word[i];
		}
	}

	if(count >= 7)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
