//#include <iostream>
//int* unitPlacePlusOne(int arr[],int& size)
//{
//    
//    for(int i=size-1;i>=0;i++)
//    {
//        
//        if(arr[i]<9)
//        {
//            arr[i]+=1;
//            break;
//            
//        }
//		arr[i]=0;
//      
//    }
//	int * newArr=new int[size+1];
//	newArr[0]=1;
//	for(int i=0;i<size;i++)
//	{
//		newArr[i+1]=arr[i];
//	}
//	size+=1;
//	return newArr;
//    //return i;
//    
//}
//int main()
//{
//    //std::cout<<"Hello World";
//    int arr[]={1,2,9};
//    int size=sizeof(arr)/sizeof(arr[0]);
//    int* result=unitPlacePlusOne(arr,size);
//	for(int i=0;i<size;i++)
//    {
//        std::cout<<result[i]<<" ";
//    }
//    system("PAUSE");
//	return 0;
//}