#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k,count =0;
        scanf("%d %d", &n , &k);
        while(n--)
        {
            int a;
            scanf("%d", &a);
            if (a==k)
            {
                count++;
            }
            
        } 
        if ( count > 0)
        {
            printf("YES \n");
        } 
        else 
        {
            printf("NO \n");
        }  
    }
    return 0;
}