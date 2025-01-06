#include<iostream>
void rotateArray(int arr[],int size,int d)
{
    for(int i=0;i<d;i++)
    {
        int first=arr[0];
        for(int j=0;j<size-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[size-1]=first;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    rotateArray(arr,sizeof(arr)/sizeof(arr[0]),2);
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}