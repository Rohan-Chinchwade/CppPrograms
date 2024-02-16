#include<iostream>
using namespace std;
class college
{
    public:
    college()
    {
        cout<<"Constructor called"<<endl;
    }
    void show()
    {
        cout<<"Method called"<<endl;
    }
};
int main()
{
   college c;
   c.show();
   return 0;
}