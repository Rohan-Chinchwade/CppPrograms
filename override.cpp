#include<iostream>
using namespace std;
class device
{
    public:
    void display()
    {
        cout<<"Calling..";
    }
};
class device1:public device
{
    public:
    void display()
    {
        cout<<"Multitasking";
    }
};
int main()
{
    device d;
    d.display();
    return 0;
}