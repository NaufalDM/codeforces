#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int poin[4];
    for(int i = 0; i< 4; i++)
    {
    	scanf("%d", &poin[i]);
	}
	
	char urut[100005];
	scanf("%s", urut);
	int totcal = 0;
	for(int i = 0; urut[i] != '\0'; i++)
	{
		int cal = urut[i] - '1';
		totcal += poin[cal];
	}
	
	printf("%d", totcal);
	return 0;
}
