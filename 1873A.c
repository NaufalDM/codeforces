#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t>0)
    {
        char a[4];
        scanf("%s", a);

        if(a[0] == 'a' || a[1] == 'b' || a[2] == 'c')
        {
            printf("YES \n");
        }
        else 
        {
            printf("NO \n");
        }
        t--;
    }
    return 0;
}