#include <iostream>

using namespace std;


int main(){
    int n;
    cin >> n;
    
    int result = 0;
    int maximum = 0;
        
    while (n > 0) {
        if (n%2 == 1) {
            result += 1;
            if (maximum < result) {
                maximum = result;
            }
        } else {
            result = 0;
        }
        
        n = n/2;
    }
    
    cout << maximum;
    
    return 0;
}

