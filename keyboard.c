#include<stdio.h>
int main()
{
    char word[200];
    char edit[200];
    int i,j=1;
    scanf("%s",word);
    edit[0]=word[0];
    for(i=0;i<sizeof word;i++)
    {
        if(word[i]== '\0')
            break;
        if(word[i]!=word[i+1])
        {
            edit[j] = word[i+1];
            j++;
        }
    }
    printf("%s",edit);
}