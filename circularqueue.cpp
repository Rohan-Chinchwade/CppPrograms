//#include<iostream>
//class Queue
//{
//	int *arr;
//	int front,size,capacity;
//public:
//	Queue(int x)
//	{
//		arr=new int[x];
//		this->size=0;
//		this->front=0;
//		this->capacity=x;
//	}
//	void enqueue(int value)
//	{
//		if(size==capacity)
//		{
//			std::cout<<"Queue is full..";
//			return;
//		}
//		int rear=(front+size)%capacity;
//		arr[rear]=value;
//		size++;
//	}
//	void dequeue()
//	{
//		if(size==0)
//			return;
//		int res=arr[front];
//		front=(front+1)%capacity;
//		size--;
//
//	}
//	void display()
//	{
//		for(int i=front;i<=size;i++)
//		{
//			std::cout<<arr[i]<<" ";
//		}
//		std::cout<<std::endl;
//	}
//	int getFront()
//	{
//		return arr[front];
//	}
//	int getRear()
//	{
//		int rear=(front+size-1)%capacity;
//		return arr[rear];
//	}
//};
//int main()
//{
//	Queue q(4);
//	q.enqueue(10);
//	q.enqueue(20);
//	q.enqueue(30);
//	q.enqueue(40);
//	q.dequeue();
//	q.display();
//	std::cout<<"Front:"<<q.getFront()<<" Rear:"<<q.getRear()<<std::endl;
//	system("PAUSE");
//	return 0;
//}