#include<iostream>
using namespace std;
class Rectangle{
	int length,breadth;
	public:
		void getdata(){
			cout<<"Enter the length of the rectangle: ";
			cin>>length;
			cout<<"Enter the breadth of the rectangle: ";
			cin>>breadth;
		}
		void displayarea(){
			int result=length*breadth;
			cout<<"The area of rectangle is "<<result<<endl;			
		}
};
int main(){
	Rectangle r;
	r.getdata();
	r.displayarea();
	return 0;
}