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
		Complex operator +(Complex & other)
		{
			Complex result;
			result.real=real+other.real;
			result.img=img+other.img;
			return result;		
		}
		void display()
		{
			cout<<"The sum is:";
			cout<<real<<"+"<<img<<"i"<<endl;
		}
};
int main()
{
	Complex c1(3.5,3);
	Complex c2(3.2,5);
	Complex sum;
	sum=c1+c2;
	sum.display();
	return 0;
}
