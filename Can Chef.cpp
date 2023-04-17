#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin >> t ; 
	while ( t--)
	{
	    int a, b ;
	    cin >> a >> b ;
	    int c , d ;
	    c = a * 15 ;
	    d = 2 * b ;
	    if ( c >= d )
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
