#include<iostream>
using namespace std;
class exceptionhandling
{
    public:
    int num,den,res,index;
    int arr[5]={0,0,0,0,0};
    void division()
    {
        cout<<"Enter Numerator and Denominator:"<<endl;
        cin>>num>>den;

        try
        {
        if(den!=0)
        {
            res=num/den;
            cout<<"Enter index to store the result"<<endl;
            cin>>index;
            if(index<5)
            {
                arr[index]=res;
                cout<<"The array is"<<endl;
            for(int i=0;i<=4;i++)
            {
                cout<<arr[i]<<" "<<endl;
            }
            }
            else
            throw "Array Index out of bond";
            
        }
        else
        throw den;
        }
        catch(int d)
        {
            cout<<"Since the denominator is "<<d<<"result will be infinite"<<endl;
        }
        catch(const char* arr)
        {
            cout<<arr;
        }
        
    }
};
int main()
{
    exceptionhandling eh1;
    eh1.division();
    return 0;
}