#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
		int n;
		scanf("%d", &n);
		int a;
		int total = 0;
		for(int i = 0; i<n-1;i++)
		{
			scanf("%d", &a);
			total += a;
		}
		
		printf("%d\n", total *-1);
	}
    return 0;
}
