#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		char alp;
		scanf(" %c", &alp);
		
		if(alp == 'c' || alp == 'o' || alp =='d' || alp == 'e' || alp == 'f' || alp =='r' || alp == 'e' || alp == 's')
		{
			printf("YES \n");
		}
		else
		{
			printf("NO \n");
		}
	}
}
