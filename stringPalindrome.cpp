// Online C++ compiler to run C++ program online
#include <iostream>
bool checkPalindrome(std::string str,int n)
{
    int left=str[0];
    int right=str[n-1];
    while(left<right)
    {
        if(str[left]!=str[right])
        {
            return 0;
        }
        left++;
        right--;
        
        
    }
    return 1;
}
int main() {
    // Write C++ code here
    //std::cout << "Try programiz.pro";
    std::string str="nitin";
    int n=str.length();
    if(checkPalindrome(str,n))
    {
        std::cout<<"Palindrome..";
    }
    else
    {
        std::cout<<"Not palindrome..";
    }

    return 0;
}