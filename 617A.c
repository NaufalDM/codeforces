#include<stdio.h>
int main()
{
	int x, langkah;
	scanf("%d", &x);
	langkah = x/5;
	if(x%5>0)
 {
	langkah++;	
	}
	printf("%d", langkah);
}
