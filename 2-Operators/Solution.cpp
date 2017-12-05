#include <cmath>
#include <iostream>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string temp;
    
    getline(cin, temp);
    double mealCost = stod(temp);
    
    getline(cin, temp);
    int tipPercent = stoi(temp);
    
    getline(cin,temp);
    int taxPercent = stoi(temp);
    
    double tip = mealCost * double(tipPercent)/100.;
    double tax = mealCost * double(taxPercent)/100.;
    
    cout << "The total meal cost is " << int(mealCost + tip + tax) << " dollars.";

    return 0;
}

