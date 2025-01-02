// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
void mergeSortedArr(int arr1[],int arr2[],int n1,int n2,std::vector<int>& arr)
{
    //std::vector<int> arr(n1+n2);
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
            arr[k++]=arr1[i++];
        else
            arr[k++]=arr2[j++];
    }
    while(i<n1)
        {
            arr[k++]=arr1[i++];
        }
        while(j<n2)
        {
            arr[k++]=arr2[j++];
        }
        
}
int main() {
    // Write C++ code here
    //std::cout << "Try programiz.pro";
    int arr1[]={1,3,5,7,8};
    int arr2[]={2,4,6};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    std::vector<int> temp(n1+n2);
    mergeSortedArr(arr1,arr2,n1,n2,temp);
    for(int i=0;i<(n1+n2);i++)
    {
        std::cout<<temp[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}