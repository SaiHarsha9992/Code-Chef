#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin >> t ;
	while ( t-- )
	{
	    int n ;
	    cin >> n ;
	    char s [ n ] ;
	    cin >> s ;
	    for ( int i = 0 ; i < n ; i++ )
	    {
	        if ( s [ i ] =='A' )
	        {
	         s [ i ] = 'T' ;
            cout << s [ i ] ;   
	        }
            else if ( s[ i ] == 'T' )
            {
             s [ i ] = 'A' ;
             cout << s [ i ] ;   
            }
            else if ( s [ i ] == 'C' )
            {
             s [ i ] = 'G' ;
             cout << s [ i ] ;   
            }
            else if ( s [ i ] == 'G' )
            {
                s [ i ] = 'C' ;
            cout << s [ i ] ;

            }
    }
	    cout << endl ;
	}
	return 0;
}
