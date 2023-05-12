#include<iostream>
using namespace std;
class fline
{
public:
int p,t;
int c;

inline void mult()
{
cout<<"Enter the value of p:";
cin>>p;
cout<<"Enter the value of t:";
cin>>t;
}
inline void display()
{
cout<<"Multiplication is: "<<p*t<<endl;
}
inline void cube()
{
cout<<"Enter the number to find cube:";
cin>>c;
}
inline void cub()
{
cout<<"cube is:"<<c*c*c;
}

};
int main()
{
fline obj;
obj.mult();
obj.display();
obj.cube();
obj.cub();
return 0;
}
