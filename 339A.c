#include<stdio.h>
int main()
{
	char angka[105];
	scanf("%s", angka);
	int satu = 0, dua = 0, tiga = 0;
	
	for (int i = 0; angka[i] != '\0'; i++)
	{
		if(angka[i] == '1')
		{
			satu++;
		}
		else if(angka[i] == '2')
		{
			dua++;
		}
		else if(angka[i] == '3')
		{
			tiga++;
		}
	}
	
	int pertama = 1;
	
	for(int i = 0; i<satu ; i++)
	{
		if(pertama == 0)
		{
			printf("+");
		}
		printf("1");
		pertama = 0;
	}
	for(int i = 0; i<dua ; i++)
	{
		if(pertama == 0)
		{
			printf("+");
		}
		printf("2");
		pertama = 0;
	}
	for(int i = 0; i<tiga ; i++)
	{
		if(pertama == 0)
		{
			printf("+");
		}
		printf("3");
		pertama = 0;
	}
}
