#include<stdio.h>
#include<string.h>
#include<math.h>
int isprime(int num)
{
    for(int i = 2;i<=sqrt(num);i++)
    {
        if(num % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n = 0;
    scanf("%d",&n);
    int cnt = 0;
    int old_i = 2;
    for(int i = 3;i <= n;i++)
    {
        if(isprime(i))
        {
            if(i - old_i == 2)
            {
                cnt++;
            }
            old_i = i;
        }

    }
    printf("%d",cnt);
}
