#include<stdio.h>
int main()
{
    int y,w;
    scanf("%d %d", &y, &w);
    if (y==1 && w==1)
    {
        printf("1/1");
    }
    else
    {
        if (y==4 && w<y)
        {
            printf("1/2");
        }
        else if(w==4 && y<w)
        {
            printf("1/2");
        }
        else if (y==5 && w<y)
        {
            printf("1/3");
        }
        else if(w==5 && y<w)
        {
            printf("1/3");
        }
        else if (y==6 && w<y)
        {
            printf("1/6");
        }
        else if(w==6 && y<w)
        {
            printf("1/6");
        }
        else if (y==3 && w<y)
        {
            printf("2/3");
        }
        else if(w==3 && y<w)
        {
            printf("2/3");
        }
        else if (y==2 && w<y)
        {
            printf("5/6");
        }
        else if(w==2 && y<w)
        {
            printf("5/6");
        }
    }
}