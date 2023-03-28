#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin >> t ;
	while (t--)
	{
	    int a , b ;
	    cin >> a >> b ;
	    if(a*.2>b*.1)
	    {
	        cout << "FIRST" << endl;
	    }
	    else if(a*.2<b*.1)
	    {
	        cout << "SECOND" << endl;
	    }
	    else
	    {
	        cout << "ANY" << endl;
	    }
	}
	return 0;
}
