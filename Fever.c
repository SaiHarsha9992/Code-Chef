#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x;
	    scanf("%d",&x);
	    if(x>98){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}
#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	int x;
	while(t--)
	{
	    scanf("%d",&x);
	    if(x<7)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

