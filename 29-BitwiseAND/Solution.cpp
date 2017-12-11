#include <iostream>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;

        // I don't understand this perfectly...
        if ((k-1 | k) <= n) {
            cout << k-1 << endl;
        } else {
            cout << k-2 << endl;
        }
    }
    return 0;
}


