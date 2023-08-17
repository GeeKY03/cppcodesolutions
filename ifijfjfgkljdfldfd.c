#include <stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i, j, l, k,n;
    char t;
    srand(time(0));
    printf("Enter the value of n \n");
    scanf("%d", &n);
    char s[n][6], temp[n][6];
    char p[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    for (i = 0; i < n; i++)
        {
            for (j=0; j<5; j++)
            {
                k=rand()%26;
                s[i][j]=p[k];
                temp[i][j]=s[i][j];
            }
            temp[i][j]='\0';
            s[i][j]='\0';
        }
        printf("\n");
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            l=0;
            for(l=0; l<5; l++)
            {
                if(strcmpi(s[i],s[j])>0)
                {
                    for (l=0; l<5; l++)
                    {
                        t=temp[i][l];
                        temp[i][l]=temp[j][l];
                        temp[j][l]=t;
                    }
                    break;
                }
            }
        }
    }
    printf("Random Strings\t\tStrings in Alphabetical Order\n");
        for (i=0; i<n; i++)
        {
            printf("%s\t\t\t%s\n", s[i], temp[i]);
        }
}