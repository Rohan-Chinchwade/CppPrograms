#include<iostream>
using namespace std;
class machine
{
    private:
    int pin=1234;
    public:
    void show()
    {
        cout<<"Pin has assigned new value"<<endl;
    }
    friend void fetch(machine m);
};
void fetch(machine obj)
{
    cout<<"Your pin is:"<<obj.pin<<endl;
}
int main()
{
    machine m1;
    m1.show();
    fetch(m1);
    return 0;
}