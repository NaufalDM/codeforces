#include <stdio.h>
#include <string.h>

int main()
{
    int t, count = 1, count2 = 0;
    char tim[11];
    char tom[11];

    scanf("%d", &t);
    int game = t - 1;

    scanf("%s", tim);

    while(game--)
    {
        char tims[11];

        scanf("%s", tims);

        if(strcmp(tim, tims) == 0)
        {
            count++;
        }
        else
        {
            strcpy(tom, tims);
            count2++;
        }
    }

    if(count > count2)
    {
        printf("%s", tim);
    }
    else
    {
        printf("%s", tom);
    }

    return 0;
}
