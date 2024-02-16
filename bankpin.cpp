#include<iostream>
using namespace std;
class datasecure
{
    private:
    int pin;
    protected:
    void setPin(int p)
    {
        pin=p;
    }
    int getpin()
    {
        return pin;
    }
};
class personal:public datasecure
{
    public:
    int user_pin,x;
    void Setpin()
    {
        cout<<"Enter your new pin"<<endl;
        cin>>user_pin;
        setPin(user_pin);
    }
    void retrievepin()
    {
        cout<<"Your pin has been set:"<<getpin()<<endl;
    }
    void verify()
    {
        cout<<"Enter your pin"<<endl;
        cin>>x;
        if(x==getpin())
        cout<<"Valid Pin"<<endl;
        else
        cout<<"Invalid Pin"<<endl;
    }

};
int main()
{
    personal p1;
    p1.Setpin();
    p1.retrievepin();
    p1.verify();
    return 0;
}