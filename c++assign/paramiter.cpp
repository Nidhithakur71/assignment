#include<iostream>
using namespace std;
class calcu
{
	int a,b,c;
	public:
		calcu(int x,int y,int z)
		 {
		 	a=x;
		 	b=y;
		 	c=z;
		 }
		 void calc()
		 {
        	c=a+b;
        	cout<<"total is :"<<c<<endl;
        	c=a-b;
        	cout<<"total is :"<<c<<endl;
        	c=a*b;
		 	cout<<"total is :"<<c<<endl;
		 }
		
};
int main()
{
	calcu n1(10,20,0);
	n1.calc();
	
	return 0;
}
