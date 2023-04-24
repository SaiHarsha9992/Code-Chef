#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin >> t ;
	while ( t-- )
	{
	    int n , c=0 , d=0 ;
	    cin >> n ;
	    vector<string>v(n);
	    for ( int i = 0 ; i < n ; i++ )
	    {
	        string m = ""; 
	        cin >> m ;
	        v.push_back(m);
	        if ( m == "START38")
	        {
	            c++;
	        }
	        else
	        {
	            d++;
	        }
	    }
	    cout << c << " " << d << endl;
	}
	return 0;
}
