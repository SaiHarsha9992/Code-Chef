#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(y%x==0 && z>y/x)
	    cout<<z-(y/x)<<endl;
	    else if(z<=y/x)
	    cout<<0<<endl;
	    else
	    cout<<y/x<<endl;
	}
	return 0;
}