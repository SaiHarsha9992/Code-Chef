#include <iostream>
using namespace std;
int prime (int n )
{
    int c = 0 ;
    for ( int i = 1 ; i <= n ; i++ )
    {
        if ( n % i == 0 )
        {
            c++;
        }
    }
    if ( c == 2 )
    {
        return 1 ;
    }
    else
    {
        return 0 ;
    }
}
int main() {
	// your code goes here
	int t ;
	cin >> t ;
	while ( t-- )
	{
	    int a , b , c ;
	    cin >> a >> b ;
	    c = a + b ;
	    if ( prime (c))
	    {
	        cout << "Alice" << endl ;
	    }
	    else
	    {
	        cout << "Bob" << endl ;
	    }
	}
	return 0;
}
