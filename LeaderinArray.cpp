#include<iostream>
#include<vector>
void findLeader(int arr[],int size)
{
    std::vector<int> vec;
    int max=arr[size-1];
    for(int i=size-1;i>=0;i--)
    {
        if(arr[i]>=max)
        {
            max=arr[i];
            vec.push_back(max);
        }
        
    }
    for(int i=(vec.size())-1;i>=0;i--)
    {
        std::cout<<vec[i]<<" ";
    }
    std::cout<<std::endl;
}
int main()
{
    int arr[]={1,2,3,4,5,2};
    findLeader(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}