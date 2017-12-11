#include <iostream>

using namespace std;


int main(){
    try{
        string S;        
        cin >> S;        

        cout << stoi(S);
    } 
    catch (exception) {
        cout << "Bad String";
    }

    return 0;
}