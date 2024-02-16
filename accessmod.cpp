#include<iostream>
using namespace std;
class parent
{
    private:
    int x=10;
    protected:
    int y=20;
    public:
    int z=30;
    void display()
    {
        cout<<"x:"<<x<<" y:"<<y<<" z:"<<z<<endl;
    }

};
class child:public parent
{
    public:
    void display1()
    {
        cout<<"y:"<<y<<" z:"<<z<<endl;
    }
};
class unknown
{
    parent p1;
    public:
    void display()
    {
        cout<<"Z:"<<p1.z<<endl;
    }
};
int main()
{
    parent p2;
    p2.display();
    child c1;
    c1.display1();
    unknown u1;
    u1.display();

    return 0;
}