#include<stdio.h>
#include<math.h>
int main()
{
	char word[105];
	int sum = 0;
	scanf("%s", word);
	
	int awal = 'a' - word[0];
	if(fabs(awal) > 13)
	{
		awal = 26 - fabs(awal);
	}
	else
	{
		awal = fabs(awal);
	}
	sum += awal;
	
	for(int i = 1; word[i] != '\0'; i++)
	{
		int rubah = word[i-1] - word[i];
		if(fabs(rubah) > 13)
		{
			rubah = 26 - fabs(rubah);
		}
		else
		{
			rubah = fabs(rubah);
		}
		
		sum += rubah;
	}
	printf("%d" , sum);
}
