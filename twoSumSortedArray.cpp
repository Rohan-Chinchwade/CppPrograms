#include<iostream>
bool twoSumSorted(int arr[],int n,int target)
{
    int left=0;
    int right=n-1;
    
    while(left<right)
    {
        int sum=arr[left]+arr[right];
        if(sum==target)
            return true;
        if(sum<target)
            left++;
        if(sum>target)
            right--;
        
            
    }
    return false;
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(twoSumSorted(arr,n,10))
        std::cout<<"Found..";
    else
        std::cout<<"Not found..";
    return 0;
}