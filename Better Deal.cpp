#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int first=100-(100*a)/100;
	    int sec=200-(200*b)/100;
	    if(first>sec) cout<<"SECOND"<<endl;
	    else if (first==sec) cout<<"BOTH"<<endl;
	    else cout<<"FIRST"<<endl;
	}
	return 0;
}