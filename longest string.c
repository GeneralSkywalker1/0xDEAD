#include<stdio.h>
#include<string.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    getchar();
    char a[81];
    char strmax[81];
    int lenmax = 0;
    for(int i = 0;i<n;i++)
    {
        gets(a);
        if(strlen(a)>lenmax)
        {
            strcpy(strmax,a);
            lenmax = strlen(a);
        }
    }
    printf("The longest is: %s",strmax);
}
