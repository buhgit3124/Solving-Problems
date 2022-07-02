//we learned here pass by reference i.e, string&

#include<iostream>
using namespace std;

void reverses(string& news)
{
    int size=news.length();
    int first=0;
    int temp;
    
    for (int i = 0; i < size/2; i++)
    {
        temp=news[i];
        news[i]=news[size-1-i];
        news[size-1-i]=temp;
    }
    
    
}


int main()
{
    cout<<"Enter your string :)"<<endl;
    string news;
    getline(cin,news);
    //cin>>news;
    cout<<"Your entered string is : --\n";
    cout<<news<<endl;
    reverses(news);
    cout<<"The reversed string is : --\n";
    cout<<news<<endl;
    return 0;
    
}