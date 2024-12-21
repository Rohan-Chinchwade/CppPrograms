//#include <iostream>
//int removeDuplicatesFromArray(int arr[],int size)
//{
//    int i=0;
//    for(int j=1;j<size;j++)
//    {   
//        if(arr[j]!=arr[i])
//        {
//            i++;
//            arr[i]=arr[j];
//        }
//    }
//    return i+1;
//    
//}
//int main()
//{
//    //std::cout<<"Hello World";
//    int arr[]={1,1,2,3,3,4};
//	int size=sizeof(arr)/sizeof(arr[0]);
//    int new_size=removeDuplicatesFromArray(arr,size);
//	for(int i=0;i<new_size;i++)
//	{
//		std::cout<<arr[i]<<" ";
//	}
//	std::cout<<std::endl;
//	system("PAUSE");
//    return 0;
//}