#include<iostream>
using namespace std;
class rectangle
{
	private:
		int length;
		int breadth;
		public:
			rectangle()
			{
				cout<<"Enter the length:"<<endl;
				cin>>length;
				cout<<"Enter the breadth:"<<endl;
				cin>>breadth;
			}
			rectangle(int l, int b)
			{
				length=l;
				breadth=b;
			}
			int area()
			{
				return length*breadth;
			}
			int perimeter()
			{
				return 2*(length+breadth);
			}
			void display()
			{
				cout<<"The length is:"<<length<<endl;
				cout<<"The breadth is:"<<breadth<<endl;
				cout<<"The area is:"<<area()<<endl;
				cout<<"The perimeter is:"<<perimeter()<<endl;
			}
};
int main()
{
	cout<<"Default constructor:"<<endl;
	rectangle r1;
	r1.display();
	cout<<"Parameterized constructor:"<<endl;
	rectangle r2(5,6);
	r2.display();
	return 0;
}
