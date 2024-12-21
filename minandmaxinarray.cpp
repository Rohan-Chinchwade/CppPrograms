//#include<iostream>
//#define size sizeof(arr)/sizeof(int)
//int main()
//{
//	int arr[5],max=0,min=0,secondMax=0;
//	std::cout<<"Enter the elements:"<<std::endl;
//	for(int i=0;i<sizeof(arr)/sizeof(int);i++)
//	{
//		std::cin>>arr[i];
//	}
//	max=min=arr[0];
//	for(int i=0;i<size;i++)
//	{
//		std::cout<<arr[i]<<" ";
//		//max=min=arr[i];
//		if(arr[i]>max)
//			secondMax=max=arr[i];
//		if(arr[i]<min)
//			min=arr[i];
//		
//		
//	}
//	for(int i=0;i<size;i++)
//	{
//		if(arr[i]<secondMax && secondMax!=max)
//			secondMax=arr[i];
//	}
//	std::cout<<"Maximum:"<<max<<std::endl;
//	std::cout<<"Minimum:"<<min<<std::endl;
//	std::cout<<"Second maximum:"<<secondMax;
//	std::cout<<std::endl;
//	system("PAUSE");
//	return 0;
//}