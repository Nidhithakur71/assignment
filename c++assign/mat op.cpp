#include<iostream>
using namespace std;
class matrix
{
	int b[2][2];
	public:
	void input();
	void display();
	void operator+(matrix x);	
};
void matrix::input()
{
        cout<<"\n Enter Matrix Element (2 X 2) : \n";
        for(int i=0; i<2; i++)
        {
                for(int j=0; j<2; j++)
                {
                        cout<<" ";
                        cin>>b[i][j];
                }
        }
}
void matrix::display()
{
        for(int i=0; i<2; i++)
        {
                cout<<" ";
                for(int j=0; j<2; j++)
                {
                        cout<<b[i][j]<<"\t";
                }
                cout<<"\n";
        }
}
void matrix::operator +(matrix x)
{
        int mat[2][2];
        for(int i=0; i<2; i++)
        {
                for(int j=0; j<2; j++)
                {
                        mat[i][j]=b[i][j]+x.b[i][j];
                }
        }
        cout<<"\n Addition of Matrix : \n\n";
        for(int i=0; i<2; i++)
        {
                cout<<" ";
                for(int j=0; j<2; j++)
                {
                        cout<<mat[i][j]<<"\t";
                }
                cout<<"\n";
        }
}
int main()
{
        matrix n,y;
        n.input(); 
        y.input();   
        cout<<"\n First Matrix : \n\n";
        n.display();   
        cout<<"\n Second Matrix : \n\n";
        y.display(); 
        n+y;       
        return 0;
} 
