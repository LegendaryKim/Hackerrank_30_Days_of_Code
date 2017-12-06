#include <iostream>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num;
    string name;    
    
    cin >> num;
    
    map<string, int> phone_book;
    
    for (int i=0; i<num; i++) {

        cin >> name >> phone_book[name];
    }
    
    while (cin >> name){         
        if (phone_book[name]) {
           cout << name << "=" << phone_book[name] << endl;
        } else {
          cout << "Not found" << endl;
        }
    }
    
    return 0;
}