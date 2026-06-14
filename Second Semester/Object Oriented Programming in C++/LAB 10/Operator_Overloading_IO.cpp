#include <iostream> 
using namespace std; 
 
class Book { 
    string title; 
    string author; 
    float price; 
 
public: 
    // Overload input operator >> 
    friend istream& operator>>(istream& in, Book& b) { 
        cout << "Enter title: "; 
        getline(in, b.title); 
        cout << "Enter author: "; 
        getline(in, b.author); 
        cout << "Enter price: "; 
        in >> b.price; 
        in.ignore(); // To ignore newline after entering price 
        return in; 
    } 
 
    // Overload output operator << 
    friend ostream& operator<<(ostream& out, const Book& b) { 
        out << "Title: " << b.title << ", Author: " << b.author << ", Price: " << b.price << endl; 
        return out; 
    } 
}; 
 
int main() { 
    Book b; 
    cin >> b; 
    cout << b; 
    return 0; 
} 

