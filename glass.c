#include <stdio.h>
int main()
{
    int n, i, j, tmp, l;
    int r[4];
    scanf("%d", &n);
    char k[n][50];
    for (i = 0; i < n; i++)
    {
        scanf("%s", k[i]);
        for (l = 1; l < 4; l++)
        {
            r[l] = 0;
        }
        r[0] = 1;
        for (j = 0; k[i][j]!='\0'; j++)
        {
            if (k[i][j] == 'A')
            {
                tmp = r[1];
                r[1] = r[2];
                r[2] = tmp;
            }
            else if (k[i][j] == 'B')
            {
                tmp = r[0];
                r[0] = r[3];
                r[3] = tmp;
            }
            else if (k[i][j] == 'C')
            {
                tmp = r[0];
                r[0] = r[2];
                r[2] = tmp;
                r[1] = r[3];
                r[3] = tmp;
            }
            else if (k[i][j] == 'D')
            {
                tmp = r[0];
                r[0] = r[1];
                r[1] = tmp;
                tmp = r[2];
                r[2] = r[3];
                r[3] = tmp;
            }
            else if (k[i][j] == 'E')
            {
                tmp = r[0];
                r[0] = r[3];
                r[3] = tmp;
                tmp = r[1];
                r[1] = r[2];
                r[2] = tmp;
            }
        }
        for (l = 0; l < 4; l++)
        {
            if (r[l] == 1)
            {
                printf("%d\n", l + 1);
            }
        }
    }
}