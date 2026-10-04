#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		char angka[10];
		int count = 0;
		scanf("%s", angka);
		int panjang = strlen(angka);
		for(int i = 0; angka[i] !='\0'; i++)
		{
			if(angka[i] != '0')
			{
				count++;
			}
		}
		printf("%d\n", count);
		for(int i = 0; angka[i] !='\0'; i++)
		{
			if(angka[i] != '0')
			{
				printf("%c", angka[i]);
				int banyak = panjang - 1 - i;
				while(banyak--)
				{
					printf("0");
				}
				printf(" ");
			}
		}
		printf("\n");
	}
}
