//#include<iostream>
//class Node
//{
//    public:
//    int data;
//    Node* next=nullptr;
//    
//    Node(int data)
//    {
//        this->data=data;
//        this->next=nullptr;
//    }
//};
//class Stack
//{
//    public:
//    Node* head;
//    
//    Stack()
//    {
//        this->head=nullptr;
//    }
//    void push(int value)
//    {
//        Node* newNode=new Node(value);
//        
//        if(!newNode)
//        {
//            std::cout<<"Stack Overflow..";
//            return;
//        }
//        newNode->next=head;
//        head=newNode;
//    }
//    void pop()
//    {
//        if(isEmpty())
//        {
//            std::cout<<"Stack Underflow.";
//            return;
//        }
//        else
//        {
//            Node* temp=head;
//            head=head->next;
//            delete temp;
//        }
//    }
//    void top()
//    {
//        if(!head)
//        {
//            std::cout<<"Stack underflow.";
//            return;
//        }
//        else
//        {
//            std::cout<<head->data;
//        }
//    }
//    void print()
//    {
//        if(!head)
//        {
//            std::cout<<"Stack is empty.";
//            return;
//        }
//        else
//        {
//            Node* curr=head;
//            while(curr)
//            {
//                std::cout<<curr->data<<" ";
//                std::cout<<std::endl;
//                curr=curr->next;
//            }
//            
//        }
//    }
//    int isEmpty()
//    {
//        return head==nullptr;
//    }
//};
//int main()
//{
//    Stack s;
//    s.push(10);
//    s.push(20);
//    s.push(30);
//    s.push(40);
//    s.pop();
//    std::cout<<"Topmost element:\n";
//    s.top();
//    std::cout<<std::endl;
//    //s.pop();
//    s.print();
//    return 0;
//}