#include<iostream>
using namespace std;
class emp
{
    public:
    int id;
    string name;
    void display()
    {
        cout<<name<<" "<<id;
    }
};
int main()
{
    emp rohan;
    rohan.id=101;
    rohan.name="Rohan";
    rohan.display();
}
