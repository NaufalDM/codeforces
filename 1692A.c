#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,count = 0;
        scanf("%d",&a);
        for(int i=0; i<3; i++ )
        {
            int b;
            scanf("%d",&b);
            if(b>a)
            {
                count++;
            }
        }
        printf("%d \n",count);
    }
    return 0;
}