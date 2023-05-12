#include<iostream>
using namespace std;
class details
{
      string name;
      int age;
     
     public:
       void getdata(string n,int g)
       {
        name=n;
        age=g;
       }
       void disdata()
         {
           cout<<endl;
           cout<<"Name : "<<name<<endl;
           cout<<"Age : "<<age<<endl;
         }
};

class student:public details
{
      float percent;

       public:
       void studis(float p)
       {
           percent=p;
       }  
        void stuinfo()
       {  
          cout<<"Percentage is "<<percent<<endl;
          cout<<"                                "<<endl;
          cout<<"                                "<<endl;
       }
};
class teacher:public details
{

    float salary;
    public:
    void salaryinfo(float s)
    {
    salary=s;
    }
    void teacherinfo()
     {
      cout<<"salary is "<<salary;
     }
};
int main()
{
   student obj;
   cout<<"     Student Information     ";
   obj.getdata("Archit",22);
   obj.disdata();
   obj.studis(88.91);
   obj.stuinfo();
   teacher t;
   cout<<endl<<"     Teacher Information     ";
   t.getdata("Nita",30);
   t.salaryinfo(40000);
   t.disdata();
   t.teacherinfo();
   return 0;
}
