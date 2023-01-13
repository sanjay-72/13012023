
#include<iostream>
using namespace std;
class student{
    public:
        string name,addr;
        int age;
        
        student()
        {
            name="unknown";
            addr="-";
            age=0;
        }
        void details(string n, int ag)
        {
            name = n;
            age = ag;
        }
        void details(string n, string a, int ag)
        {
            name = n;
            addr = a;
            age = ag;
        }
        void details()
        {
            cout << "Name: "<< name<<endl;
            cout<< "age: "<< age<<endl;
            cout << "Address: "<< addr<< endl;
        }
};

int main()
{
    int x;
    cout << "Enter no of students \n";
    cin>> x;
    student s[x];
    string name,addr;
    int i,age;   
    for(i=0;i<x;i++)
    {
        cout << "Enter name and age \n";
        cin.ignore();
        getline(cin,name);
        cin>>age;

        s[i].details(name, age);
    }   
    for(i=0;i<x;i++)
    {
        s[i].getinfo();
    }
    
    for(i=0;i<x;i++)
    {
        cout << "Enter name,address and age \n";
        cin.ignore();
        getline(cin,name);
        cin.ignore();
        getline(cin,addr);
        cin>>age;
        s[i].details(name,addr,age);
    }
    
    for(i=0;i<x;i++)
    {
        s[i].getinfo();
    }
    return 0;
}
