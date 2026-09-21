#include<stdio.h>
int main()
{
    int a,b,c,tot,max=0;
    scanf("%d %d %d", &a, &b, &c);

    //1
    tot = a+b*c;
    max = tot;

    //2
    tot = a*(b+c);
    if(tot>max)
    {
        max = tot;
    }

    //3 
    tot = a*b*c;
    if(tot>max)
    {
        max = tot;
    }
    
    //4
    tot = (a+b)*c;
    if(tot>max)
    {
        max = tot;
    }
    //5
    tot = a+b+c;
    if(tot>max)
    {
        max = tot;
    }
    //6
    tot = a*b+c;
    if(tot>max)
    {
        max = tot;
    }

    printf("%d", max);
    return 0;

}