#include<iostream>
using namespace std;
class student
{
	public:
	int r,b,p,c,e;
	string n;
	double percent;
	void getdata()
	{
		cout<<"enter student name:"<<endl;
		cin>>n;
		cout<<"enter student roll no:"<<endl;
		cin>>r;
	}
 void setdata()
 {
 	cout<<"             marksheet       "<<endl;
 	cout<<"student name"<<n<<endl;
 	cout<<"student roll no"<<r<<endl;
 }
};
class exam:public student
{
	public:
		void marks()
		{
		   cout<<"Enter the marks of biology:";
           cin>>b;
           cout<<"Enter the marks of Physics:";
           cin>>p;
           cout<<"Enter the marks of Chemistry:";
           cin>>c;
           cout<<"Enter the marks of English:";
           cin>>e;  
		}
		void display()
		{
          cout<<"biologymmarks are:        "<<b<<endl;
          cout<<"Physics marks are:        "<<p<<endl;
          cout<<"Chemistry marks are:       "<<c<<endl;
          cout<<"English marks are:          "<<e<<endl;
}
};
class res:public exam
{
	public:
		void total()
		{
			percent=(b+p+c+e)/4.0;
            cout<<endl<<"Total percentage is:      "<<percent<<"%"<<endl;

		}
};
int main()
{
	res obj;
	obj.getdata();
	obj.marks();
	obj.setdata();
	obj.display();
	obj.total();
	return 0;
	}
