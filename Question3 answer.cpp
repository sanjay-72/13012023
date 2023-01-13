#include <iostream>
using namespace std;
class Area
{
public:
    void output(int l, int b)
    {
        cout<<"Area of Rectangle = "<<l*b<<endl;
    }
void output(int a)
    {
        cout<<"Area of Square = "<<a*a<< endl;
    }
};
int main()
{
    Area obj;
    obj.output(3,3);
    obj.output(3);
}
