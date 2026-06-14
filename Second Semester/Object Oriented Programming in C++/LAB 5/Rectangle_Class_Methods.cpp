#include<iostream>
using namespace std;
class Rectangle
{
	int length,breadth;
	public:
		void set(int l, int b);
		int area();
};
void Rectangle::set(int l, int b)
{
	length=l;
	breadth=b;
}
int Rectangle::area()
{
	return length*breadth;
}
int main()
{
	Rectangle r1;
	r1.set(5,3);
	cout<<"Area:"<<r1.area()<<endl;
	return 0;
}
