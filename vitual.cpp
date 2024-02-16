#include<iostream>
using namespace std;
class virtualFunction
{
    public:
    virtual void print()=0;
    

};
class derived:public virtualFunction
{
    public:
    void print()
    {
        cout<<"Derived class implementation";
    }
};
int main()
{
    derived d1;
    d1.print();
    return 0;
}