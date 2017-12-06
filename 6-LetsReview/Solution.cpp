#include <iostream>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    
    string str;
    for (int i=0; i<n; i++){
        cin >> str;
        
        
        for (int j=0; j<str.length(); j++) {
            if (j%2 == 0) {
                cout << str[j];
            }
        }
        
        cout << " ";
        
        for (int j=0; j<str.length(); j++) {
            if (j%2 != 0) {
                cout << str[j];
            }
        }
        
        cout << endl;
    }
    
    return 0;
}

