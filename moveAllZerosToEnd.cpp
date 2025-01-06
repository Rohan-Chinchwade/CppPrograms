#include<iostream>
void moveAllZerosToEnd(int arr[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=0)
        {
            arr[count]=arr[i];
            count++;
        }
    }
    for(int j=count;j<size;j++)
    {
        arr[j]=0;
    }
}
int main()
{
    int arr[]={1,2,0,4,3,0,5,0};
    moveAllZerosToEnd(arr,sizeof(arr)/sizeof(arr[0]));
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}