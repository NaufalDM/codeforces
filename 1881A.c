#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
typedef long long ll;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    	int n,m;
    	scanf("%d %d", &n, &m);
    	char x[1005];
    	char s[30];
    	scanf("%s", x);
    	scanf("%s", s);
    	int operasi = 0;
    	
    	while(strstr(x,s) == NULL && operasi < 6)
    	{
    		char temp[1005];
            strcpy(temp, x);
            strcat(x, temp);
            operasi++;
		}
		
		if(strstr(x,s) != NULL)
		{
			printf("%d\n", operasi);
		}
		else
		{
			printf("-1\n");
		}
	}
    return 0;
}
