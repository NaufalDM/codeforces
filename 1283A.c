#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    	int h,m;
    	scanf("%d %d", &h, &m);
    	int menit = h*60 + m;
    	printf("%d\n", 24*60 - menit);
	}
    return 0;
}
