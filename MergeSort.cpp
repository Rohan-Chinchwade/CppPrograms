// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
void merge(vector<int>& arr,int low,int mid,int high){
    int left=low;
    int right=mid+1;
    vector<int> temp;
    
    while(left<=mid && right<=mid+1)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }
}
void mergeSort(vector<int>& arr ,int low,int high)
{
    if(low>=high)
        return;
    int mid=(low+high)/2;
    mergeSort(arr,0,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main() {
    // Write C++ code here
    //std::cout << "Try programiz.pro";
    vector<int> arr={6,7,8,1,2,3};
    mergeSort(arr,0,arr.size()-1);
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}