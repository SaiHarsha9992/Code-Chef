#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n ;
        scanf ( "%d" , &n ) ;
        if ( n < 3 )
        {
            printf ( "LIGHT\n" ) ;
        }
        else if ( n >= 3 && n < 7 )
        {
            printf ( "MODERATE\n" ) ;
        }
        else if ( n >= 7)
        {
            printf ( "HEAVY\n" ) ;
        }
    }
}