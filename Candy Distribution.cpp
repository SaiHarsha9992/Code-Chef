#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin >> t ;
	while ( t-- )
	{
	    int n , m , a ;
	    cin >>n>>m;
	    a=n/m;
	    if(n%m!=0)
	    cout <<"NO"<<endl;
	    else if(a%2==0)
	    cout <<"YES"<<endl;
	    else
	    cout <<"NO"<<endl;
	}
	return 0;
}
