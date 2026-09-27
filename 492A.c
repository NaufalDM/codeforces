#include<stdio.h>
int main()
{
    int n ,batas, tot = 0;
    scanf("%d", &n);
    
    for(int i = 1;  ; i++)
    {
        batas = i * (i+1) / 2;
        if(n>=batas)
        {
            n-=batas;
            tot ++;
        }
        else{
            break;
        }
    }
    printf("%d", tot);
}