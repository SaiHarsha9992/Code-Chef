#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ; 
    cin >> t ;
    while ( t-- ) 
    {
        int x , y ,z ;
        cin >> x >> y >> z ;
        int  c = 0 , l = 0 ;
        while ( l <= z ) 
        {
            c++;
            l = ( c * x ) + y ;
        }
        c = c - 1 ;
        cout << c << endl ;
    }
    return 0;
}