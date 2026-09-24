#include<stdio.h>
int main()
{
    int n, tot =0,pol=0;
    scanf("%d",&n);
    while(n--)
    {
        int a;
        scanf("%d", &a);

        if(a>0)
        {
            pol+=a;
        }
        else if(a<0 && pol>0)
        {
            pol--;
        }
        else if (a<0 && pol==0)
        {
            tot++;
        }
    }
    printf("%d", tot);
    return 0;    
}