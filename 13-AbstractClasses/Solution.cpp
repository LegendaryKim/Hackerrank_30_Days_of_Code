
#include <iostream>

using namespace std;

class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t, string a) {
            title=t;
            author=a;
        }
        virtual void display()=0;
}

// Write your MyBook class here
class MyBook : public Book {
    //   Class Constructor
    //   
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    private:
        int price;    
    // Write your constructor here
    public:
        MyBook(string title, string author, int price) : Book(title, author){
            this->price = price;
        }
    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here
        void display() {
            cout << "Title: " << this->title << endl;
            cout << "Author: " << this->author << endl;
            cout << "Price: " << this->price << endl;
        }
};    
// End class

int main() {
    string title, author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    Mybook novel(title,author,price);
    novel.display();
    return 0;
}