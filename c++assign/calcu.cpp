#include<iostream>
using namespace std;

class calc
{
	public:
		int x,y;
	      calc()
		{
			cout<<"enter the value of x"<<endl;
			cin>>x;
			cout<<"enter the value of y"<<endl;
			cin>>y;		
		}
		void add()
 {
			cout<<"addition:"<<x+y<<endl;
 }
  void sub()
 {
			cout<<"subtration:"<<x-y<<endl;
 }
  void mul()
  {
  	
			cout<<"multiplication:"<<x*y<<endl;
  }
 void div()
{
			cout<<"division:"<<x/y<<endl;
}
};
int main()
{
	calc obj ;
	obj.add();
	obj.sub();
	obj.mul();
	obj.div();
	return 0;
}

