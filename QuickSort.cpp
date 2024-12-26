// Online C++ compiler to run C++ program online
#include <iostream>
void swap(int& val1,int& val2)
{
    int temp=val1;
    val1=val2;
    val2=temp;
}
int partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=pivot && i<=high-1)
        {
            i++;
        }
        while(arr[j]>pivot && j>=low+1)
        {
            j--;
        }
        if(i<j)
            swap(arr[i],arr[j]);
            
    }
    swap(arr[low],arr[j]);
    return j;
}
void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi=partition(arr,low,high);
        quickSort(arr,0,pi-1);
        quickSort(arr,pi+1,high);
    }
}
int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
    int arr[]={7,6,9,1,2,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,size-1);
    for(int i=0;i<size;i++)
    {
        std::cout<<arr[i]<<" ";
        
    }
    std::cout<<std::endl;

    return 0;
}