#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
typedef long long ll;

int cmpLL(const void *a, const void *b)
{
    ll x = *(ll *)a;
    ll y = *(ll *)b;
    return (x > y) - (x < y);
}

int main()
{
    char shift;
    scanf("%c", &shift);
    char arrange[3][11] = {"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"};
    char keyboard[105];
    scanf("%s", keyboard);
    for(int poskey = 0; keyboard[poskey] !='\0'; poskey++)
    {
	    for(int i = 0; i<3;i++)
	    {
	    	for(int j = 0; j<10;j++)
	    	{
	    		if(keyboard[poskey] == arrange[i][j] && shift == 'R')
	    		{
	    			keyboard[poskey] = arrange[i][j-1];
	    			break;
				}
				else if(keyboard[poskey] == arrange[i][j] && shift == 'L')
				{
					keyboard[poskey] = arrange[i][j+1];
					break;
				}
			}
		}
	}
	
	printf("%s\n", keyboard);
    return 0;
}
//qsort(a, n, sizeof(ll), cmpLL);
