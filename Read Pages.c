#include <stdio.h>
int main ( )
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
        int X,Y,N;
	    scanf("%d",&N);
    	scanf("%d",&X);
    	scanf("%d",&Y);
    	if(N<=(X*Y)){
    	    printf("YES\n");
    	}
    	else{
    	    printf("NO\n");
    	}
    }
}