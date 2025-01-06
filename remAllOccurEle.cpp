#include<iostream>
int remAllOccurEle(int arr[],int size,int ele)
{
    int j=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=ele)
            j++;
    }
    return j;
}
int main()
{
    int arr[]={1,2,3,3,3};
    int res=remAllOccurEle(arr,sizeof(arr)/sizeof(arr[0]),2);
    std::cout<<"Answer: "<<res<<std::endl;
    return 0;
}