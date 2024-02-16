#include<iostream>
using namespace std;
class exceptionhandling
{
    public:
    int num,den;
    void division()
    {
        cout<<"Enter Numerator and Denominator:"<<endl;
        cin>>num>>den;

        try
        {
        if(den!=0)
        cout<<"Result: "<<num/den<<endl;
        else
        throw den;
        }
        catch(int d)
        {
            cout<<"Since the denominator is"<<d<<"result will be infinite"<<endl;
        }
        
    }
};
int main()
{
    exceptionhandling eh;
    eh.division();
    return 0;
}