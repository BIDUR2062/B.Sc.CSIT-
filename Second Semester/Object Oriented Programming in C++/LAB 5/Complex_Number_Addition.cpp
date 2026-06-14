#include<iostream>
using namespace std;
class Complex
{
	float real;
	float img;
	public:
		Complex(float r=0, float i=0)
		{
			real=r;
			img=i;
		}
		Complex add(Complex & other)
		{
			return Complex(real+other.real,img+other.img);
		}
		void display()
		{
			cout<<real<<"+i"<<img<<endl;
		}
};
int main()
{
	Complex c1(2,3);
	Complex c2(4,5);
	Complex result=c1.add(c2);
	cout<<"Sum is:"<<endl;
	result.display();
	return 0;
}
