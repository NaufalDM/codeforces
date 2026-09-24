#include<stdio.h>
#include<math.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int beda = fmin(a, b);
    int sama = abs((a-b)/2);

    printf ("%d %d", beda , sama);

}