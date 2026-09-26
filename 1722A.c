#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    
    while (t--)
    {
        int n;
        char timur[11];
        scanf("%d", &n);

        scanf("%s", &timur);
        
        int T = 0 , i = 0 , m = 0 , u = 0 , r = 0;
        for (int j = 0; j < n; j++) 
        {
            if (timur[j] == 'T') T++;
            else if (timur[j] == 'i') i++;
            else if (timur[j] == 'm') m++;
            else if (timur[j] == 'u') u++;
            else if (timur[j] == 'r') r++;
        }

        if(n == 5 && T==1 && i==1 && m==1 && u==1 && r ==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }
}