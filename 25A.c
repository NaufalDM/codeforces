#include<stdio.h>
int main()
{
    int n,x1,x2,x3,res,x;

    scanf("%d", &n);
    scanf("%d %d %d", &x1, &x2, &x3);

    if(x1%2==0 && x2%2==0 || x1%2==0 && x3%2==0 || x2%2==0 && x3%2==0)
    {
        res = 0;
    }
    else
    {
        res = 1;
    }

    if(x1%2!=res)
    {
        printf("1");
    }
    else if(x2%2!=res)
    {
        printf("2");
    }
    else if(x3%2!=res)
    {
        printf("3");
    }
    else
    {
        for(int i=4; i<=n; i++)
        {
            scanf("%d", &x);
            if (x%2!=res)
            {
                printf("%d", i);
            }
        }
    }
    return 0;
}