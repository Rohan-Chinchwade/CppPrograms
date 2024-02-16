#include<iostream>
using namespace std;
int main()
{
    int n,ans=1;
    cout<<"Enter the Number: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    cout<<"The Factorial of "<<n<<" is "<<ans<<endl;
    return 0;
}