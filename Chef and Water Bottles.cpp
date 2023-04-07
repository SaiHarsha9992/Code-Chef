#include <iostream>
using namespace std;

int main() {
	int t,a,b,c,d;
	cin >>t;
	while(t--){
	    cin >>a>>b>>c;
	    d=a*b;
	    if(d<c)
	    cout <<a<<endl;
	    else
	    cout <<c/b<<endl;
	}
	return 0;
}
