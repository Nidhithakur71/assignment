#include <iostream>
#include <string>
using namespace std;
class Concatenator 
{
public:
    Concatenator() {}
    Concatenator(string st) : str(st) {}

    Concatenator operator+(Concatenator& other) 
	{
        Concatenator result(this->str + other.str);
        return result;
    }

    string getStr() 
	{
        return str;
    }

private:
    string str;
};

int main() 
{
    Concatenator c1("good");
    Concatenator c2(" morning");

    Concatenator result = c1 + c2;

    cout << result.getStr() << endl;

    return 0;
}
