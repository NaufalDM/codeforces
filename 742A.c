#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
typedef long long ll;

int cmp(const void *a, const void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;
    return (x > y) - (x < y);
}

int main()
{
    int t;
    scanf("%d", &t);
	if(t == 0)
	{
		printf("1");
	}
    else if(t%4 == 1)
    {
    	printf("8");
	}
	else if(t%4 == 2)
	{
		printf("4");
	}
	else if(t%4 == 3)
	{
		printf("2");
	}
	else if(t%4 == 0)
	{
		printf("6");
	}
	
    return 0;
}
//qsort(a, n, sizeof(int), cmp);
