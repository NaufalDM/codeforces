#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[5005],b[5005],c[5005];
    int tot1 = 0,tot2 = 0,tot3 = 0;
    
    for(int i = 1; i<=n; i++)
    {
    	int x;
    	scanf("%d", &x);
    	if(x == 1)
            a[tot1++] = i;
        else if(x == 2)
            b[tot2++] = i;
        else
            c[tot3++] = i;
	}
	
	
	int banyak = tot1;
	if (tot2 < banyak) banyak = tot2;
	if (tot3 < banyak) banyak = tot3;
	
	printf("%d\n", banyak);
	
	
	for(int i = 0; i< banyak;i++)
	{
		printf("%d %d %d\n", a[i], b[i], c[i]);
	}
	return 0;
}
