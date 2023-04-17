#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float a,b,x,y;
	    cin>>a>>x>>b>>y;
	    if((float)a/x==(float)b/y){
	        cout<<"EQUAL\n";
	    }
	    else if((float)a/x < (float)b/y){
	        cout<<"BOB\n";
	    }
	    else{
	        cout<<"ALICE\n";
	    }
	}
	return 0;
}
