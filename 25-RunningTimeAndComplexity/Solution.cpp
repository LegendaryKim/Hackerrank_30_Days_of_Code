#include <cmath>
#include <iostream>

using namespace std;

bool isPrime(int n){
    if (n==2) {
        return true;
    } else if (n==1 || n % 2 == 0) {
        return false;
    }

    for (int i=3; i <=sqrt(n); i++) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T, n;
    cin >> T;

    for (int i = 0; i < T ; i++) {
        cin >> n;

        if (isPrime(n)) cout << "Prime" << endl;
        else cout << "Not prime" << endl;
    }


    return 0;
}

