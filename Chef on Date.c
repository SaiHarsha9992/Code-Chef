#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(y>x)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}
