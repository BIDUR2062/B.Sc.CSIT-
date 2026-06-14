#include<iostream>
using namespace std;
class Book
{
	string title;
	string author;
	double price;
	public:
		Book()
		{
			cout<<"Default constructor:"<<endl;
			cout<<"Enter the title of the book:";
			getline(cin,title);
			cout<<"Enter the author of the book:";
			getline(cin,author);
			cout<<"Enter the price of the book:";
			cin>>price;
			cout<<"The title of the book is:"<<title<<endl;
			cout<<"The author of the book is:"<<author<<endl;
			cout<<"The price of the book is:"<<price<<endl;
		}
		Book(string t, string a, double p)
		{
			cout<<"Parameterized constructor:"<<endl;
			title=t;
			author=a;
			price=p;
			cout<<"The title of the book is:"<<title<<endl;
			cout<<"The author of the book is:"<<author<<endl;
			cout<<"The price of the book is:"<<price<<endl;
		}
		Book(const Book&r)
		{
			cout<<"Copy constructor:"<<endl;
			title=r.title;
			author=r.author;
			price=r.price;
			cout<<"The title of the book is:"<<r.title<<endl;
			cout<<"The author of the book is:"<<r.author<<endl;
			cout<<"The price of the book is:"<<r.price<<endl;
		}
};
int main()
{
	Book b0;
	Book b1("Munamadan","Laxmi",250.67);
	Book b2(b1);
	return 0;
}
