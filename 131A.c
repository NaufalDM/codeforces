#include<stdio.h>
#include<string.h>
int main()
{
	char word[100] ;
	scanf("%s", word);
	int caps = 0;
	int panjang = strlen(word);
	
	for(int i = 1; word[i] != '\0'; i++)
	{
		if(word[i] < 96)
		{
			caps++;
		}
		else
   		{
        	caps = 0;
        	break;
    	}
	}
	
	if(caps > 0 && word[0] < 96)
	{
		for(int j = 0; j<=caps ; j++)
		{
			word[j] += 32;
		}
	}
	else if(caps > 0 && word[0] > 96)
	{
		for(int j = 1; j<=caps ; j++)
		{
			word[j] += 32;
		}
		word[0] -= 32;
	}
	else if(word[0] < 96 && panjang == 1)
	{
	    word[0] += 32;
	}
	else if(caps == 0 && word[0] > 96 && panjang == 1)
	{
	    word[0] -= 32;
	}
	
	printf("%s", word);
	
}
