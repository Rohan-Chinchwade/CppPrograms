//#include<iostream>
//bool linearSearch(int arr[],int size,int element)
//{
//	for(int i=0;i<size;i++)
//	{
//		if(arr[i]==element)
//		{
//			return 1;
//		}
//
//	}
//	return 0;
//}
//int main()
//{
//	int size;
//	std::cout<<"Enter the size of array:";
//	std::cin>>size;
//	std::cout<<"Enter the elements:\n";
//	int* arr=new int[size];
//	for(int i=0;i<size;i++)
//	{
//		std::cin>>arr[i];
//	}
//	int element;
//	std::cout<<"Enter the element you want to search:";
//	std::cin>>element;
//	bool flag=linearSearch(arr,size,element);
//	if(flag)
//		std::cout<<"Element found..";
//	else
//		std::cout<<"Element not found..";
//	system("PAUSE");
//	return 0;
//}