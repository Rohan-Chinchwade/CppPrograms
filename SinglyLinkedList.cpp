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
//class SinglyLinkedList
//{
//private:
//	Node* head;
//public:
//	SinglyLinkedList()
//	{
//		head=nullptr;
//	}
//	~SinglyLinkedList()
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
//	void traverseLinkedList()
//	{
//		Node* current=head;
//		while(current!=nullptr)
//		{
//			std::cout<<current->data<<"->";
//			current=current->next;
//		}
//		std::cout<<std::endl;
//	}
//	bool searchLinkedList(int target)
//	{
//		while(head!=nullptr)
//		{
//			if(head->data==target)
//				return 1;
//			head=head->next;
//		}
//		return 0;
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
//	void insertAtBeginning(int value)
//	{
//		Node* newNode=new Node(value);
//
//		if(head==nullptr)
//		{
//			head=newNode;	
//		}
//		else
//		{
//			newNode->next=head;
//			head=newNode;
//		}
//		
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
//	void insertAtPos(int pos,int value)
//	{
//		Node* newNode=new Node(value);
//	
//		if(pos<1)
//		{
//			std::cout<<"Invalid position..";
//			return;
//		}
//		if(pos==1)
//		{
//			newNode->next=head;
//			head=newNode;
//		}
//		Node* previous=head;
//		int count=1;
//		while(count<pos-1 && previous!=nullptr)
//		{
//			previous=previous->next;
//			count++;
//		}
//		if(previous==nullptr)
//		{
//			std::cout<<"Invalid position..";
//		}
//		newNode->next=previous->next;
//		previous->next=newNode;
//
//	}
//	void deleteAtBeginning()
//	{
//		if(head==nullptr)
//		{
//			return;
//		}
//		Node* temp=head;
//		head=head->next;
//
//		delete temp;
//	}
//	void deleteAtLast()
//	{
//		if(head==nullptr)
//			return;
//		if(head->next==nullptr)
//		{
//			delete head;
//			return;
//		}
//		Node* second_last=head;
//		while(second_last->next->next!=nullptr)
//		{
//			second_last=second_last->next;
//		}
//		delete(second_last->next);
//	
//		second_last->next=nullptr;
//	
//	}
//	void deleteAtPos(int pos)
//	{
//		if(pos<1)
//		{
//			std::cout<<"Invalid position..";
//			return;
//		}
//		if(head==nullptr)
//			return;
//		if(pos==1)
//		{
//			Node* temp=head;
//			head=head->next;
//			delete temp;
//		}
//		Node* current=head;
//		for(int i=0;i<pos-1 && current!=nullptr;i++)
//		{
//			current=current->next;
//		}
//		if(current==NULL || current->next==nullptr)
//		{
//			return;
//		}
//		Node* temp=current->next;
//
//		current->next=current->next->next;
//
//		delete temp;
//
//	}
//
//};
//int main()
//{
//	SinglyLinkedList list;
//	list.insertAtBeginning(10);
//	list.insertAtBeginning(20);
//	list.insertAtEnd(30);
//	list.insertAtPos(3,40);
//	list.deleteAtBeginning();
//	list.deleteAtLast();
//	list.insertAtEnd(30);
//	//list.deleteAtPos(2);
//	list.traverseLinkedList();
//	std::cout<<"\nLength of linked list:"<<list.findLength()<<std::endl;
//	if(list.searchLinkedList(100))
//		std::cout<<"target element found..";
//	else
//		std::cout<<"target element not found..";
//	system("PAUSE");
//	return 0;
//}