#include<iostream>
using namespace std;
int main()
{
    int n,pow,ans;
    cout<<"Enter Number:"<<endl;
    cin>>n;
    
    cout<<"Enter Exponent:"<<endl;
    cin>>pow;

    for(int i=1;i<pow;i++)
    {
        ans=n*n;
    }
    cout<<"The "<<pow<<" Power of "<<n<<" is "<<ans<<endl;
}