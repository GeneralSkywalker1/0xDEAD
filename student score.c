#include<stdio.h>
#include<string.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    float max = 0;
    float min = 100;
    float sum = 0;
    float score = 0;
    for(int i = 0;i < n;i++)
    {   scanf("%f",&score);
        if(score > max)
            max = score;
        if(score < min)
            min = score;
        sum+=score;
    }
    printf("average = %.2f\nmax = %.2f\nmin = %.2f",sum/n,max,min);
}
