#include<stdio.h>
#include<string.h>
int main()
{
	int t,cek = 0;
	scanf("%d", &t);
	while(t--)
	{
		char word[100];
		scanf("%s", word);
		int panjang = strlen(word);
		int awal = 0;
		if(panjang %2 != 0)
		{
			cek = 0;
			printf("NO \n");
			continue;	
		}
		else
		{
			panjang /= 2;
		}
		
		for(int i = panjang ; word[i] != '\0'; i++)
		{
			if(word[i] != word[awal])
			{
				cek = 0;
				break;
			}
			else
			{
				cek++;
			}
			awal++;
		}
		if(cek>0)
		{
			printf("YES \n");
		}
		else
		{
			printf("NO \n");
		}
	}
	return 0;
}
