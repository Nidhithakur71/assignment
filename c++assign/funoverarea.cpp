#include<iostream>
using namespace std;
class overload
{
	public:
int area(int l, int b)
{
	return(l*b);
}
	float area(float r)
{
	return(3.14*r*r);
}
float area(float bs,float h,int n)
{
	return((bs*h)/n);
}
};
int main()
{
	overload obj;
	cout<<"\n area of rectangle is:"<<obj.area(2,3)<<endl;
	cout<<"\n area of circle is:"<<obj.area(4)<<endl;
	cout<<"\n area of triangle is:"<<obj.area(3,2,3);
	return 0;
}
	
	

