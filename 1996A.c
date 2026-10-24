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
    	printf("%d\n", n/4 + n%4/2);
	}
    return 0;
}
