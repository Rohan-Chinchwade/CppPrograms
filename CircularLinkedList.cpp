//#include<iostream>
//class Node
//{
//public:
//	int data;
//	Node* next;
//
//	Node(int value)
//	{
//		this->data=value;
//		this->next=nullptr;
//	}
//};
//class CircularLinkedList
//{
//private:
//	Node* head;
//public:
//	CircularLinkedList()
//	{
//		head=nullptr;
//	}
//	void insertAtBeginning(int value)
//	{
//		Node* newNode=new Node(value);
//		if(head==nullptr)
//		{
//			head=newNode;
//			head->next=head;
//		}
//		else
//		{
//			Node* temp=head;
//			while(temp->next!=head)
//			{
//				temp=temp->next;
//			}
//			temp->next=newNode;
//			newNode->next=head;
//			head=newNode;
//		}
//
//	}
//	void insertAtEnd(int value)
//	{
//		Node* newNode=new Node(value);
//		if(head==nullptr)
//		{
//			head=newNode;
//			head->next=head;
//		}
//		else
//		{
//			Node* curr=head;
//			while(true)
//			{
//				curr=curr->next;
//				if(curr->next==head)
//				{
//					curr->next=newNode;
//					newNode->next=head;
//					break;
//				}
//			}
//		}
//	}
//	void insertAtPos(int pos,int value)
//	{
//		Node* newNode=new Node(value);
//		if(pos<1)
//		{
//			std::cout<<"Invalid position..";
//			return;
//		}
//		if(pos==1)
//		{
//			insertAtBeginning(value);
//		}
//		else
//		{
//			int count=1;
//			Node* curr=head;
//			while(count<pos-1)
//			{
//				curr=curr->next;
//				count++;
//			}
//			newNode->next=curr->next;
//			curr->next=newNode;
//		}
//	}
//	void deleteAtBeginning()
//	{
//		if(head==nullptr)
//		{
//			std::cout<<"List is empty..";
//			return;
//		}
//		Node* curr=head;
//		if(curr->next==head)
//		{
//			delete curr;
//			head=nullptr;
//		}
//		else
//		{
//			
//			while(curr->next!=head)
//			{
//				curr=curr->next;
//			}
//			//curr->next=head->next;
//			head=head->next;
//			curr->next=head;
//			//delete curr;
//		}
//	}
//	void deleteAtEnd()
//	{
//	    Node* temp=head;
//	    while(temp->next->next!=head)
//	    {
//	        temp=temp->next;
//	    }
//	    temp->next=head;
//	    //free (temp->next->next);
//	    //temp->next->next=nullptr;
//	}
//	void deleteAtPos(int pos)
//	{
//	    if(pos<1)
//	    {
//	        std::cout<<"Invalid position..";
//	        return;
//	    }
//	    if(pos==1)
//	    {
//	        deleteAtBeginning();
//	    }
//	    else
//	    {
//	        int count=1;
//	        Node* curr=head;
//	        while(count<pos-1)
//	        {
//	            curr=curr->next;
//	            count++;
//	        }
//	        curr->next=curr->next->next;
//	        
//	        
//	    }
//	}
//	void printList()
//	{
//		if(!head)
//		{
//			std::cout<<"List is empty..";
//			return;
//		}
//		else
//		{
//			Node* curr=head;
//			do
//			{
//				std::cout<<curr->data<<" ";
//				curr=curr->next;
//			}while(curr!=head);
//			std::cout<<std::endl;
//		}
//	}
//	int calLength()
//	{
//		if(head==nullptr)
//		{
//			std::cout<<"List is empty..";
//			return 0;
//		}
//		else
//		{
//			int count=0;
//			Node* curr=head;
//			while(true)
//			{
//				count++;
//				curr=curr->next;
//				if(curr==head)
//				break;
//			}
//			return count;
//		}
//	}
//};
//int main()
//{
//	CircularLinkedList list;
//	list.insertAtBeginning(20);
//	list.insertAtBeginning(10);
//	list.insertAtEnd(30);
//	list.insertAtEnd(40);
//	//list.insertAtPos(2,25);
//	//list.deleteAtBeginning();
//	//list.deleteAtEnd();
//	list.deleteAtPos(3);
//	//std::cout<<"Length of linked list:"<<list.calLength()<<std::endl;
//	list.printList();
//	//system("PAUSE");
//	return 0;
//}