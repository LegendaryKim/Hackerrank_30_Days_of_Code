#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    // Write Your Code Here
    int totalNumberOfSwaps = 0;
    for (int i = 0; i < n; i++) {
        // Track number of elements swapped during a single array traversal
        int numberofSwaps = 0;

        for (int j = 0; j < n - 1; j++) {
            // Swap adjacent elements if they are in decreasing order
            if (a[j] > a[j+1]) {
                int tmp = a[j+1];
                a[j+1] = a[j];
                a[j] = tmp;
                numberofSwaps++;
            }
        }

        totalNumberOfSwaps += numberofSwaps;

        // If no elements were swapped during a traversal, array is sorted
        if (numberofSwaps == 0) {
            break;
        }
    }

    printf("Array is sorted in %i swaps.\n", totalNumberOfSwaps);
    printf("First Element: %i\n", a[0]);
    printf("Last Element: %i\n", a[a.size()-1]);      
    
    return 0;
}