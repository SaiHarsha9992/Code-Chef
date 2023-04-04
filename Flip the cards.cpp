#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin >> t ;
	while (t--)
    {
        int a,b;
        cin>>a>>b;
        if(a/2>=b)
        cout<<b<<endl;
        else
        cout<<a-b<<endl;
    }
	return 0;
}
