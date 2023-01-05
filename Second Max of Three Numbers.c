#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,a;
        scanf("%d%d%d",&x,&y,&a);
        if(x>y&&x>a)
        {
            if(y<a)
            {
                printf("%d\n",a);
            }
            else
            {
                printf("%d\n",y);
            }
        }
        else if(y>x&&y>a)
        {
            if(x<a)
            {
                printf("%d\n",a);
            }
            else
            {
                printf("%d\n",x);
            }
        }
        else if(a>x&&a>y)
        {
            if(y<x)
            {
                printf("%d\n",x);
            }
            else
            {
                printf("%d\n",y);
            }
        }
    }   
}
