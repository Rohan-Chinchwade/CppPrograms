#include<iostream>
using namespace std;
class demo
{
    public:
    demo()
    {
        cout<<"Default Constructor"<<endl;
    }
    demo(int a)
    {
        cout<<"Integer val="<<a<<endl;
    }
};
int main()
{
    demo d;
    demo d1(20);
    return 0;
}