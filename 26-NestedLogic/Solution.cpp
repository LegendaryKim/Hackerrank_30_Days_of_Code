#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Da, Ma, Ya;
    int De, Me, Ye;
    
    cin >> Da >> Ma >> Ya;
    cin >> De >> Me >> Ye;    

    int fine = 0;
    if (Ya > Ye) {
        fine = 10000;
    } else if (Ya == Ye) {
        if (Ma > Me) {
            fine = (Ma - Me) * 500;
        } else if (Ma == Me) {
            if (Da > De) {
                fine = (Da - De) * 15;
            }
        }
    }

    cout << fine << endl;
    return 0;
}


