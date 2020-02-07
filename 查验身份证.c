#include<stdio.h>
#include<string.h>
int main()
{
    int a[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    int n = 0;
    scanf("%d",&n);
    getchar();
    int flag = 0;
    for(int j = 0;j < n;j++)
    {
        int flag1 = 0;
        char iden[19];
        gets(iden);
        int sum = 0;
        for(int i = 0;i<17;i++)
        {
            if(iden[i]>'9'||iden[i]<'0')
            {
                puts(iden);
                flag1 = 1;
                break;
            }
            sum+=a[i]*(iden[i]-'0');
        }
        if(flag1==1)
        {
            flag = 1;
            continue;
        }
        sum%=11;
        char m[]={"10X98765432"};
        if(iden[17]!=m[sum])
        {

            flag = 1;
            puts(iden);
        }
    }
    if(flag == 0)
        puts("All passed");
}
