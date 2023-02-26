#include <iostream>
using namespace std;

int main()
{
	// your code goes here
    int t ;
    cin >> t ;
    while ( t-- )
    {
        int a , b , c ;
        cin >> a >> b >> c ;
        a = a * 10 ;
        if ( a > b )
        {
            cout << b * c << endl ;
        }
        else
        {
            cout << a * c << endl ;
        }
    }
	return 0;
}
