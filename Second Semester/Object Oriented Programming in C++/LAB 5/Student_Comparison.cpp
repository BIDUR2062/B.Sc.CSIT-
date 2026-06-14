#include<iostream>
using namespace std;
class Student
{
	public:
		string name;
		float marks;
		void getdata()
		{
			cout<<"Enter the student name:";
			cin>>name;
			cout<<"Enter the marks:";
			cin>>marks;
		}
};
void compareStudents(Student s1, Student s2)
{
	if(s1.marks>s2.marks)
	{
		cout<<s1.name<<" is the student getting higher marks.";
	}
	else if(s2.marks>s1.marks)
	{
		cout<<s2.name<<" is the student getting higher marks.";
	}
	else
	{
		cout<<" Both got equal marks.";
	}
}
int main()
{
	Student s1, s2;
	s1.getdata();
	s2.getdata();
	compareStudents(s1,s2);
	return 0;
}
