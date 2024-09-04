#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        int x, y;
        cin >> x >> y;

        int minv = min(x,y);
        int maxv = max(x, y);
        
        if(maxv >= 2 * minv){
            cout << "0" << endl;
        
            continue;
        }
        int res = abs(maxv - 2 * minv);
        res = min(res, abs(minv-(maxv/2)));
        
        cout << res << endl;
        
    }

    return 0;
}
