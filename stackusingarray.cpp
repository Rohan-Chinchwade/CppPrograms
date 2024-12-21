//#include<iostream>
//#define MAX_SIZE 5
//class Stack
//{
//    int top;
//    int a[MAX_SIZE];
//    public:
//    Stack()
//    {
//        this->top=-1;
//    }
//    int isEmpty()
//    {
//        return top==-1;
//    }
//    int isFull()
//    {
//        return top==MAX_SIZE-1;
//    }
//    void push(int value)
//    {
//        if(isFull())
//        {
//            std::cout<<"Stack overflow.";
//            return;
//        }
//        else
//        {
//            top++;
//            a[top]=value;
//            std::cout<<value<<" added to stack.\n";
//        }
//    }
//    void pop()
//    {
//        if(isEmpty())
//        {
//            std::cout<<"Stack underflow.";
//            return;
//        }
//        else
//        {
//            std::cout<<a[top]<<" popped from the stack.\n";
//            a[top]=0;
//            top--;
//        }
//    }
//    int returnTop()
//    {
//        return (a[top]);
//    }
//    void print()
//    {
//        if(isEmpty())
//        {
//            std::cout<<"Stack underflow.";
//            return;
//        }
//        else
//        {
//            for(int i=top;i>=0;i--)
//            {
//                std::cout<<a[i]<<"\n";
//                
//            }
//            std::cout<<std::endl;
//        }
//    }
//    
//};
//int main()
//{
//    Stack s;
//    s.push(10);
//    s.push(20);
//    s.push(30);
//    //s.pop();
//    //std::cout<<std::endl;
//    s.print();
//    std::cout<<s.returnTop();
//	system("PAUSE");
//    return 0;
//}