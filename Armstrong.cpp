//#include<iostream>
//int calLength(int num)
//{
//	int len=0;
//	while(num!=0)
//	{
//		num/=10;
//		len++;
//	}
//	return len;
//}
//int power(int rev,int len)
//{
//	int result=1;
//	for(int i=0;i<len;i++)
//	{
//		result*=rev;
//	}
//	return result;
//}
//void checkArmstrong(int num)
//{
//	int len=calLength(num);
//	int digit=num,result=0;
//	while(digit!=0)
//	{
//		int rev=digit%10;
//		result+=power(rev,len);
//		digit/=10;
//	}
//	//std::cout<<result;
//	if(result==num)
//		std::cout<<"Entered number is armstrong.";
//	else
//		std::cout<<"Entered number is not armstrong.";
//}
//int main()
//{
//	//int len=calLength(1234);
//	//std::cout<<"Length of number 1234 is "<<len;
//	int num;
//	std::cout<<"Enter the number you want to check:";
//	std::cin>>num;
//	checkArmstrong(num);
//	system("PAUSE");
//	return 0;
//}