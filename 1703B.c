#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    	int n;
    	scanf("%d", &n);
    	char soal[55];
    	scanf("%s", soal);
    	int huruf[27] = {0};
    	int total = 0;
    	for(int i = 0; i<n; i++)
    	{
    		if(huruf[soal[i] - 'A'] == 0)
    		{
    			total+=2;
    			huruf[soal[i] - 'A'] = 1;
			}
			else
			{
				total++;
			}
		}
		printf("%d\n", total);
	}
	return 0;
}
