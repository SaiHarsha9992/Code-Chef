#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin >> t ;
	while ( t-- )
	{
	    int x,y;
	    cin>>x>>y;
	    int n=0;int m=0;
	    if(x%10==0)
	    {
	        n=x/10;
	    }
	    else
	    {
	        n=(x/10)+1;
	    }
	    if(y%10==0)
	    {
	        m=y/10;
	    }
	    else{
	        m=(y/10)+1;
	    }
	    cout<<abs(n-m)<<endl;
	}
	return 0;
}
