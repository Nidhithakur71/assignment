
#include<iostream>
using namespace std;

class calculator
{
public:
int x,y;
cal()
{
  cout<<"Enter the value of x:";
  cin>>x;
  cout<<"Enter the value of y:";
  cin>>y;
}
void calc()
{
   cout<<"Addition:"<<x+y<<endl;
   cout<<"Subtraction:"<<x-y<<endl;
   cout<<"Multiplication:"<<x*y<<endl;
   cout<<"Division:"<<x/y<<endl;
}
};
int main()
{
         calculator obj;
         obj.cal();
          obj.calc();
return 0;

}


