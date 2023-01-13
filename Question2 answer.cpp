#include<iostream>
#include<string.h>
#include<string>

using namespace std;
class programming
{
	public:
	programming()
		{ 
		cout<<"I love programming languages"<<endl ;
		}
	programming(char str[])
		{
			cout<<"I love "<<str<<endl;
		}
	};

int main()
{
 programming o1;
 char s[100];
 cin>>s;
programming o2(s);
}
