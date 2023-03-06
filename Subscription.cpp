#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin >> t ;
	while ( t-- )
	{
	    int a , b , n ;
	    cin >> a >> b ;
	    n = a / 6 ;
	    if (a > n * 6 ) 
	    cout << ( n + 1 ) * b << endl ;
	    else
	    cout << n * b << endl ;
	}
	return 0;
}
