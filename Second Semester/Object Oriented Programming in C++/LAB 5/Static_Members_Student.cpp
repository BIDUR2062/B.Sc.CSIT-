#include<iostream>
using namespace std;
class Student
{
	static string name;
	static int age;
	public:
		static void getdata(string a, int b)
		{
			name=a;
			age=b;
		}
		static void display()
		{
			cout<<"The name is:"<<name<<endl;
			cout<<"The age is:"<<age<<endl;
		}
};
string Student::name;
int Student::age;
int main()
{
	Student::getdata("Bidur",18);
	Student::display();
	return 0;
}
