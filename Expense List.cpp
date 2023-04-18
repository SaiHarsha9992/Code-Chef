#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin >> t ;
	while (t--)
	{
	    int a , b ;
	    cin >> a >> b ;
	    float total=pow(2,b);
	  for(int i=1;i<=a;i++){
	      total=total-(total/2);
	  }
	  cout<<total<<endl;
	}
	return 0;
}
