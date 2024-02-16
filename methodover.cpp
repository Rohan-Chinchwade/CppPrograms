#include<iostream>
using namespace std;
class overloading
{
    public:
    void show()
    {
        cout<<"Method overloading"<<endl;
    }
    int show(int a)
    {
        cout<<"Integer="<<a<<endl;
    }
    double show(double a)
    {
        cout<<"Double value="<<a<<endl;
    }
    string show(string a)
    {
        cout<<"String Val="<<a<<endl;
    }
};
int main()
{
    overloading o;
    o.show();
    o.show(24);
    o.show(24.456);
    o.show("Rohan");
    
    return 0;
}