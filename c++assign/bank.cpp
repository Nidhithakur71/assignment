#include<iostream>
using namespace std;

 class bank
   {
 	public:
 		string name;
 		int balance,acc,n,w,d,total;
 		string actype;
 		
 			void ban()
 			{
 			cout<<"\n\n\n\n enter account details"<<endl;
 			cout<<"------------------------------------------------\n";       
 			cout<<"enter your name"<<endl;
 			cin>>name;
 			cout<<"enter account number"<<endl;
 			cin>>acc;
 			cout<<"enter account type"<<endl;
 			cin>>actype;
 			cout<<"balance"<<endl;
 			cin>>balance;
 			cout<<"enter deposit amount"<<endl;
 			cin>>d;
 			n=balance+d;
 			cout<<"enter withdraw amount"<<endl;
 			cin>>w;
 			total=w-n;
 			cout<<"total :"<<total<<endl;
 			cout<<"name"<<name<<endl;
 			cout<<"total balance :"<<total;
	        }  
};
int main()
{
	bank obj;
	obj.ban();
	return 0;
}
		   	
		   	
		   	
		   	
		   
		   
		   
		   
		   
		   
 
