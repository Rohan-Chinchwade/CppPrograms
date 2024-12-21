//#include<iostream>
//class Node
//{
//public:
//	int data;
//	Node* next;
//	Node(int data)
//	{
//		this->data=data;
//		this->next=nullptr;
//	}
//};
//class LinkedList
//{
//private:
//	Node* head;
//public:
//	LinkedList()
//	{
//		head=nullptr;
//	}
//	~LinkedList()
//	{
//		Node* current=head;
//		Node* nextNode;
//
//		while(current!=nullptr)
//		{
//			nextNode=current->next;
//			delete current;
//			current=nextNode;
//		}
//	}
//	void insertAtEnd(int value)
//	{
//		Node* newNode=new Node(value);
//
//		if(head==nullptr)
//		{
//			head=newNode;
//			return;
//		}
//		Node* current=head;
//		while(current->next!=nullptr)
//		{
//			current=current->next;
//		}
//		current->next=newNode;
//		
//
//	}
//	int findLength()
//	{
//		int length=0;
//		Node* current=head;
//		while(current!=nullptr)
//		{
//			length++;
//			current=current->next;
//		}
//		return length;
//	}
//	int findMiddle()
//	{
//		int count=1;
//		Node* curr=head;
//		while(count<=findLength())
//		{
//			if((findLength()/2)+1==count)
//			{
//				return curr->data;
//				break;
//			}
//			curr=curr->next;
//			count++;
//		}
//	}
//};
//int main()
//{
//	LinkedList l;
//	l.insertAtEnd(10);
//	l.insertAtEnd(20);
//	l.insertAtEnd(30);
//	l.insertAtEnd(40);
//	l.insertAtEnd(50);
//	l.insertAtEnd(60);
//	//std::cout<<l.findLength();
//	std::cout<<"Middle node:"<<l.findMiddle();
//	system("PAUSE");
//	return 0;
//}