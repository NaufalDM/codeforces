#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    	char op[4];
    	scanf("%s", op);
    	printf("%d\n", (op[0] - '0') + (op[2] - '0'));
	}
    return 0;
}
