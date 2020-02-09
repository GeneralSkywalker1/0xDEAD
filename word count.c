#include<stdio.h>
#include<string.h>
int main()
{
    char sentence[1000];
    gets(sentence);
    int cnt = 1;
    for(int i = 0;i < strlen(sentence)-1;i++)
    {
        if(sentence[i]==' '&&sentence[i+1]!=' ')
            cnt++;
    }
    if(sentence[0] == ' ')
        cnt--;
    printf("%d",cnt);
}
