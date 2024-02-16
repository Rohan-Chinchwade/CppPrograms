#include<iostream>
using namespace std;
int main()
{
    int n,flag=0;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    if(n==0||n==1)
    return 0;
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            flag=1;
            
        }
        if(flag==0)
        cout<<"Prime Number";
        else
        cout<<"Not prime ";
    }
    return 0;

}