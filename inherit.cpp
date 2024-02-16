#include<iostream>
using namespace std;
class person
{
    public:
    int id;
    string name;
};
class employee:public person
{
    public:
    int empno;
    string desig;
};
int main()
{
    employee e1;
    // printf("Enter the name: ");
    // scanf("%s",&e1.name);
    e1.id=101;
    e1.name="Rohan";
    return 0;
}