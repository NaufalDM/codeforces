#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,l,c,d,p,nl,np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c,&d,&p,&nl,&np);

    int totalb = k * l;
    int toastb = totalb/ nl;

    int toastc = c*d;

    int toasts = p/np;

    int toast = fmin(toastb, fmin(toastc,toasts)) / n;

    printf("%d", toast);
    return 0;

}