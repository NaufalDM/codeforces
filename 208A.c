#include<stdio.h>

int main()
{
    char word[200];
    scanf("%s", word);

    int spasi = 0;

    for(int i = 0; word[i] != '\0'; i++)
    {
        if(word[i] == 'W' && word[i+1] == 'U' && word[i+2] == 'B')
        {
            if(spasi == 0)
            {
                printf(" ");
                spasi = 1;
            }
            i += 2;
        }
        else
        {
            printf("%c", word[i]);
            spasi = 0;
        }
    }

    return 0;
}
