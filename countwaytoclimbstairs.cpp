//#include<iostream>
//int countWayToClimbStairs(int n)
//{
//	if(n<0)
//		return 0;
//	if(n==0)
//		return 1;
//	int count=countWayToClimbStairs(n-1)+countWayToClimbStairs(n-2);
//	return count;
//}
//int main()
//{
//	int n;
//	std::cout<<"Enter the no of stairs:";
//	std::cin>>n;
//	int count=countWayToClimbStairs(n);
//	std::cout<<"No of Ways:"<<count<<std::endl;
//	system("PAUSE");
//	return 0;
//}