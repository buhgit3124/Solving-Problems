#include<iostream>
using namespace std;

int ispalindrome(string arr){
int i=0,j=arr.size()-1;
while(j>i){
    
    if (arr[i]!=arr[j])
    {
        return 1;
        break;
    }
    
    i++;
    j--;
    
}
return 0;
}

int main(){

    cout<<"Enter your string : \n";
    string input;
    cin>>input;
    int result=ispalindrome(input);

        if (result==0)
        {
            cout<<"The string is a palindrome\n";
        }
        else
        {
            cout<<"The string is not a palindrome\n";
        }
    return 0;
}