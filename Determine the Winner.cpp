#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
    cin>>T;
    while(T--)
    {
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        int c=max(x,y);
	    int d=max(a,b);
	    if(c==d)
	    {
	       cout<<"TIE"<<endl;
	    }else if(c<d){
	        cout<<"Q"<<endl;
	    }else{
	        cout<<"P"<<endl;
	    }
        
        
    }
	return 0;
}
