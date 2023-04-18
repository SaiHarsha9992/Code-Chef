#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int X,Y;
	    cin>>X>>Y;
	    int d=(500-2*X)+(1000-4*(X+Y));
	    int e=(1000-4*Y)+(500-2*(X+Y));
	    if(d>e){
	        cout<<d<<endl;
	    }
	    else{
	        cout<<e<<endl;
	    }
	}
	return 0;
}
