#include<iostream>
using namespace std;
class valu
{
	int n,p;
	public:
	void getdata()
	{
		cout<<"enter number,before swapping values:"<<endl;
		cin>>n>>p;
	}
	friend void swap(valu);
	void display()
	{
		cout<<"after swap n is:"<<n;
		cout<<"after swap p is:"<<p;
	}		
};
void swap(valu t)
{
	t.n=t.n+t.p;
	t.p=t.n-t.p;
	t.n=t.n-t.p;
	
	cout<<"After swapping:"<<"n:"<<t.n<<endl<<"p:"<<t.p;
}
int main()
{
	valu obj;
	obj.getdata();
	swap(obj);
	obj.display();
	return 0;
	
}
