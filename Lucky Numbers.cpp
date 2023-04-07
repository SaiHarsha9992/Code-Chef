#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin >> t ;
	while(t--)
	{
	    int n , r , c = 0 ;
	    cin >> n ;
	    while (n!=0)
	    {
	        r = n % 10 ;
	        if ( r == 7 )
	        {
	            c++;
	        }
	        n = n / 10 ;
	    }
	    if ( c > 0 )
	    {
	        cout << "YES" << endl;
	    }
	    else
	    {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
