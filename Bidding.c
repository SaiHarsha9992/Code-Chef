#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,a;
        scanf("%d%d%d",&x,&y,&a);
        if(a>y&&a>x)
        {
            printf("Charlie\n");
        }
        else if(y>x&&y>a)
        {
            printf("Bob\n");
        }
        else
        {
            printf("Alice\n");
        }
    }
}
