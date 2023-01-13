#include<iostream>
using namespace std;
class Rectangle
{
	public:
		int length,breadth;
		Rectangle()
		{
			length = 0;
			breadth = 0;
		}
		Rectangle(int l,int b)
		{
			length = l;
			breadth = b;
		}
		Rectangle(int x)
		{
			length=breadth=x;
		}
		int area()
		{
			return length*breadth;
		}
};
int main()
{
	Rectangle r1;
	Rectangle r2(2);
	Rectangle r3(2,3);
	cout<<r1.area()<<endl<<r2.area()<<endl<<r3.area();
}
