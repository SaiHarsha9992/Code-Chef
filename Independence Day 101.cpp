#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;
        
        int maxCount = max({A, B, C});
        int sumOfOtherTwo = A + B + C - maxCount;
        
        if (maxCount - sumOfOtherTwo > 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    
    return 0;
}
