#include<stdio.h>
#include<string.h>
int main()
{
	char s[110];
	char t[110];
	
	scanf("%s", s);
	scanf("%s", t);
	int panjang = strlen(s);
	int panjan = strlen(t);
	int benar = 1;
	if(panjang != panjan)
	{
		benar = 0;
	}
	for(int i = 0 ; i<panjang ; i++)
	{
		if(s[i] != t[panjang-1-i])
		{
			benar = 0;
			break;
		}
	}
	
	if(benar==1)
	{
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}
