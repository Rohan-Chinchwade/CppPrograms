//#include<iostream>
//class QNode
//{
//public:
//	int data;
//	QNode* next;
//	QNode(int data)
//	{
//		this->data=data;
//		this->next=nullptr;
//	}
//
//};
//class Queue
//{
//private:
//	QNode* front;
//	QNode* rear;
//public:
//	Queue()
//	{
//		this->front=nullptr;
//		this->rear=nullptr;
//	}
//
//	int isEmpty()
//	{
//		return front==nullptr;
//	}
//
//	void enqueue(int data)
//	{
//		QNode* newNode=new QNode(data);
//		if(this->isEmpty())
//		{
//			front=rear=newNode;
//			return;
//		}
//		else
//		{
//			rear->next=newNode;
//			rear=newNode;
//		}
//	}
//	void dequeue()
//	{
//		if(this->isEmpty())
//		{
//			std::cout<<"Queue underflow.";
//			return;
//		}
//		else
//		{
//			QNode* temp=front;
//			front=front->next;
//			delete temp;
//		}
//	}
//	int getFront()
//	{
//		if(this->isEmpty())
//		{
//			std::cout<<"Queue is empty.";
//			return 0;
//		}
//		else
//		{
//			return front->data;
//		}
//	}
//	int getRear()
//	{
//		if(this->isEmpty())
//		{
//			std::cout<<"Queue is empty.";
//			return 0;
//		}
//		else
//		{
//			return rear->data;
//		}
//	}
//	void display()
//	{
//		if(this->isEmpty())
//		{
//			std::cout<<"Queue is empty..";
//			return;
//		}
//		else
//		{
//			QNode* curr=front;
//			while(curr)
//			{
//				std::cout<<curr->data<<" ";
//				curr=curr->next;
//			}
//			std::cout<<std::endl;
//		}
//	}
//	
//};
//int main()
//{
//	Queue q;
//	q.enqueue(10);
//	q.enqueue(20);
//	q.enqueue(30);
//	q.enqueue(40);
//	//q.dequeue();
//	q.display();
//	std::cout<<"Front:"<<q.getFront()<<std::endl;
//	std::cout<<"Rear:"<<q.getRear()<<std::endl;
//	system("PAUSE");
//	return 0;
//}