#include <iostream>
using namespace std;

int main() {
	int t ;
	cin >> t ;
	while ( t-- )
	{
	    int n , c ;
	    cin >> n ;
	    c = (0.2*50)+(0.2*50)+(0.3*50) ;
	    cout << (50 - c) * n << endl ;
	}
	return 0;
}
