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
//		Node* curr=head;
//		if(!head)
//		{
//			std::cout<<"List is empty..";
//			return 0;
//		}
//		else
//		{
//			int count=1;
//			while(curr->next!=nullptr)
//			{
//				count++;
//				curr=curr->next;
//			}
//			return count;
//		}
//	}
//	int nthNodeFromEnd(int count,int n)
//	{
//		Node* curr=head;
//		int cnt=1;
//		while(curr->next!=nullptr)
//		{
//			if(cnt==(count-n)+1)
//			{
//				return curr->data;
//				break;
//			}
//			curr=curr->next;
//			cnt++;
//		}
//	}
//};
//int main()
//{
//	LinkedList list;
//	list.insertAtEnd(10);
//	list.insertAtEnd(20);
//	list.insertAtEnd(30);
//	list.insertAtEnd(40);
//	//std::cout<<"Length:"<<list.findLength();
//	std::cout<<list.nthNodeFromEnd(list.findLength(),1);
//	system("PAUSE");
//	return 0;
//}