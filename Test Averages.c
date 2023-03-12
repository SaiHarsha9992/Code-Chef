#include<stdio.h>
int main()
{
    int T,A,B,C;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d %d",&A,&B,&C);
        if((A+B)/2<35||(A+C)/2<35||(B+C)/2<35)
        {
            printf("Fail\n");
        }
        else
        printf("Pass\n");
    }
    return 0;
}