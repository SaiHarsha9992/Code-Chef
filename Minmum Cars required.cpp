#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin >> t ; 
	while ( t-- )
	{
	    int n , c = 0 ;
	    cin >> n ;
        c=n/4;
        if(n%4!=0)
        {
            c++;
        }
        cout << c << endl ;
	}
	return 0;
}
