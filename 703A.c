#include<stdio.h>
int main()
{
    int t,nm = 0,nc = 0;
    scanf("%d", &t);

    while (t--)
    {
        int m,c;
        scanf("%d %d", &m , &c);

        if(m>c)
        {
            nm++;
        }
        else if (c>m)
        {
            nc++;
        }
    }
    if(nm>nc)
    {
        printf("Mishka");
    }
    else if(nc>nm)
    {
        printf("Chris");
    }
    else{
        printf("Friendship is magic!^^");
    }
}