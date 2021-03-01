#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i = 0, j, k = 0;
    char word[1000];
    char delim[10][5] = {"i", "of", "at", "with", "for", "the", "on", "a", "an", "in"};
    char *p;
    gets(word);
    p = strtok(word," ");
    while (p != '\0')
    {
        for (j=0 ; j < 10; j++)
        {
            if (strcmp(p, delim[j]))
            {
                k++;
            }      
        }
        if (k == 10 || i == 0)
        {
            printf("%c", toupper(p[0]));
        }
        p = strtok('\0'," ");
        i++, k = 0;
    }
    return 0;
}