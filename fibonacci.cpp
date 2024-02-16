#include<iostream>
using namespace std;
int main()
{
    int n,temp;
    cout<<"Enter the limit: "<<endl;
    cin>>n;
    int a=0,b=1;
    if(n==1||n==2)
    cout<<a<<" "<<b<<endl;
    else
    {
        cout<<a<<" "<<b;
        for(int i=1;i<=n-2;i++)
        {
            
            temp=a+b;
            a=b;
            b=temp;
            cout<<" "<<temp;
        }
    }
    return 0;
}