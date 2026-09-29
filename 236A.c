#include<stdio.h>
int main()
{
	char str[100];
	int huruf[26] = {0};
	int jumlah = 0;
	scanf("%s", str);
	
	for (int i = 0 ; str[i] != '\0'; i++ )
	{
		if(str[i]>= 'a' && str[i]<='z')
		{
			if(huruf[str[i]- 'a'] == 0)
			{
				huruf[str[i]- 'a']= 1;
				jumlah++;
			}
		}
	}
	
	if(jumlah%2 != 0)
	{
		printf("IGNORE HIM!");
	}
	else
	{
		printf("CHAT WITH HER!");
	}
} 
