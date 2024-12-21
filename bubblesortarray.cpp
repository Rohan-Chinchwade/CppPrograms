//#include<iostream>
//int main()
//{
//	/*--------------BubbleSort---------------*/
//	int n=0;
//	std::cout<<"Enter the size of array:";
//	std::cin>>n;
//	//int arr[n];
//	int* arr=new int[n];
//	std::cout<<"Enter the elements:\n";
//	for(int i=0;i<n;i++)
//	{
//		std::cin>>arr[i];
//	}
//	std::cout<<std::endl;
//	for(int i=0;i<n;i++)
//	{
//		bool swapped=false;
//		for(int j=0;j<n-i-1;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				/*int temp=arr[j];
//				arr[i]=arr[j+1];
//				arr[j+1]=temp;*/
//				std::swap(arr[j],arr[j+1]);
//				swapped=1;
//			}
//			
//		}
//		if(!swapped)
//		{
//			break;
//		}
//	}
//	for(int i=0;i<n;i++)
//	{
//		std::cout<<arr[i]<<" ";
//	}
//	
//	delete []arr;
//	system("PAUSE");
//	return 0;
//}