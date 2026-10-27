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
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char s[505][5];
        for(int i = 0; i<n;i++)
        {
        	scanf("%s", s[i]);
		}
		
		for(int i = n-1;i>=0;i--)
		{
			for(int j = 0;j<4;j++)
        	{
        		if(s[i][j] == '#')
        		{
        			printf("%d ", j+1);
				}
			}
		}
		printf("\n");
		
    }
    return 0;
}
//qsort(a, n, sizeof(int), cmp);
