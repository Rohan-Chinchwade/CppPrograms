//#include<iostream>
//class SmartPtr
//{
//	int* ptr;
//public:
//	SmartPtr(int* p=NULL)
//	{
//		ptr=p;
//	}
//	~SmartPtr()
//	{
//		delete(ptr);
//	}
//	int& operator*()
//	{
//		return *ptr;
//	}
//};
//int main()
//{
//	SmartPtr ptr(new int());
//	*ptr=20;
//	std::cout<<*ptr;
//	system("PAUSE");
//	return 0;
//}