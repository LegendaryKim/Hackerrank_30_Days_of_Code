#include <iostream>

using namespace std;


int main(){
    int N;
    cin >> N;
    
    if (N % 2 != 0) {
        cout << "Weird";
    } else if (N < 6) {
        cout << "Not Weird";
    } else if (N < 21) {
        cout << "Weird";
    } else {
        cout << "Not Weird";
    }
    
    return 0;
}

