#include<iostream>
#include<conio.h>
using namespace std;
class student_database
{
	int a,b,c,d,reg;
	char name[30];
	float avg,total;
	public:
		void getdata();
		void percentage();
		void place();
		void highest();
		void lowest();
};
void student_database::getdata()
{
	cout<<"enter the name : "<<endl;
	cin>>name;
	cout<<"enter the reg no : ";
	cin>>reg;
	cout<<"enter the marks "<<endl;
	cin>>a>>b>>c>>d;
	total=a+b+c+d;
	avg=total/4;
	cout<<"total marks = "<<total;
	cout<<"\naverage marks = "<<avg;
}
int main()
	{
		student_database s;
		s.getdata();
	}