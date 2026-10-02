#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		char a[11];
		char b[11];
		char c[11];
		
		scanf("%s", a);
		scanf("%s", b);
		scanf("%s", c);
		
		printf("%c%c%c\n", a[0], b[0], c[0]);
	}
}
