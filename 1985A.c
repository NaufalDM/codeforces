#include<stdio.h>
int main()
{
	int t;
	scanf("%d" ,&t);
	while(t--)
	{
		char w1[4];
		char w2[4];
		
		scanf("%s %s", w1, w2);
		printf("%c%c%c ",w2[0], w1[1], w1[2]);
		printf("%c%c%c \n",w1[0], w2[1], w2[2]);
		
	}
}

