//#include<iostream>
//class Node
//{
//    public:
//    int data;
//    Node* prev;
//    Node* next;
//    
//    Node(int value)
//    {
//        this->data=value;
//        this->prev=nullptr;
//        this->next=nullptr;
//    }
//};
//class DoublyLinkedList
//{
//    private:
//    Node* head;
//    Node* tail;
//    
//    public:
//    DoublyLinkedList()
//    {
//        this->head=nullptr;
//        this->tail=nullptr;
//    }
//    void insertAtBeginning(int value)
//    {
//        Node* newNode=new Node(value);
//        if(head==nullptr)
//        {
//            head=tail=newNode;
//        }
//        else
//        {
//            newNode->next=head;
//            head->prev=newNode;
//            head=newNode;
//        }
//        
//    }
//    void insertAtEnd(int value)
//    {
//        Node* newNode=new Node(value);
//        if(!head)
//        {
//            head=tail=newNode;
//        }
//        else
//        {
//            tail->next=newNode;
//            newNode->prev=tail;
//            tail=newNode;
//            
//        }
//    }
//    void insertAtPos(int pos,int value)
//    {
//        Node* newNode=new Node(value);
//        if(pos<1)
//        {
//            std::cout<<"Invalid position";
//            return;
//        }
//        if(pos==1)
//        {
//            newNode->next=head;
//            head->prev=newNode;
//            head=newNode;
//        }
//        else
//        {
//            Node* curr=head;
//            int count=1;
//            while(count<pos-1)
//            {
//                curr=curr->next;
//                count++;
//            }
//            curr->next->prev=newNode;
//            newNode->next=curr->next;
//            newNode->prev=curr;
//            curr->next=newNode;
//        }
//    }
//    void deleteAtBeginning()
//    {
//        if(!head)
//        {
//            std::cout<<"List is empty.";
//            return;
//        }
//        else
//        {
//            Node* temp=head;
//            head=head->next;
//            if(head)
//            head->prev=nullptr;
//            //head->next->prev=head;
//            delete temp;
//            
//        }
//    }
//    void deleteAtEnd()
//    {
//        if(!head)
//        {
//            std::cout<<"List is empty.";
//            return;
//        }
//        else
//        {
//            Node* temp=tail;
//            tail=tail->prev;
//            if(tail)
//            tail->next=nullptr;
//            delete temp;
//        }
//    }
//    void deleteAtPos(int pos)
//    {
//        if(pos<1)
//        {
//            std::cout<<"Invalid position.";
//            return;
//        }
//        if(pos==1)
//        deleteAtBeginning();
//        else
//        {
//            Node* curr=head;
//            int count=1;
//            while(count<pos-1)
//            {
//                curr=curr->next;
//                count++;
//            }
//            Node* temp=curr->next;
//            tail=curr;
//            curr->next=nullptr;
//            delete temp;
//        }
//    }
//    void forwardTraversal()
//    {
//        Node* curr=head;
//        while(curr)
//        {
//            std::cout<<curr->data<<"->";
//            curr=curr->next;
//            
//        }
//        std::cout<<std::endl;
//    }
//    void backwardTraversal()
//    {
//        Node* curr=tail;
//        while(curr)
//        {
//            std::cout<<curr->data<<"->";
//            curr=curr->prev;
//        }
//        std::cout<<std::endl;
//    }
//    int findLength()
//    {
//        Node* curr=head;
//        int count=1;
//        while(curr->next!=nullptr)
//        {
//            curr=curr->next;
//            count++;
//        }
//        return count;
//    }
//};
//int main()
//{
//    DoublyLinkedList list;
//    list.insertAtBeginning(10);
//    list.insertAtBeginning(20);
//    list.insertAtEnd(30);
//    list.insertAtPos(3,40);
//    //list.deleteAtBeginning();
//    //list.deleteAtBeginning();
//    list.deleteAtEnd();
//    list.deleteAtPos(3);
//    list.forwardTraversal();
//    list.backwardTraversal();
//    std::cout<<std::endl;
//    std::cout<<"Length:"<<list.findLength();
//    return 0;
//}