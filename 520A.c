#include<stdio.h>
int main()
{
	int n, jumlah =0;
	scanf("%d", &n);
	char pangram[n];
	char huruf[26] = {0};
	scanf("%s", pangram);
	
	for(int i = 0; pangram[i] !='\0'; i++)
	{
		if(pangram[i] <96)
		{
			pangram[i] += 32;
		}
		if(huruf[pangram[i] - 'a'] == 0)
		{
			huruf[pangram[i] - 'a'] = 1;
			jumlah++;
		}
	}
	if(jumlah == 26)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}
