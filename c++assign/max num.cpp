#include<iostream>
using namespace std;
class nm
{
		int x,y;
		
		public:
		nm()
		{
			cout<<"first number:"<<endl;
          	cin>>x;
         	cout<<"second number:"<<endl;
         	cin>>y;
		}
friend void num(nm);
};
void num(nm c)
{
		if(c.x>c.y)
	{
		cout<<"x is max number:"<<c.x<<endl;
	}
	else
	{
		cout<< "y is max number:"<<c.y<<endl;
	}
	
}
int main()
{
	nm obj;
	num(obj);
	return 0;
}


