#include<iostream>
using namespace std;

void reverse(int arr[],int size){

    for(int i=0;i<size/2;i++){
        
        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;

    }

}
void print(int arr[],int size){

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}


int main(){
    
    int arr[]={1,35,5,6,7,4,5};
//to reverse the arrary
    int size= sizeof(arr)/sizeof(int);
 
 print(arr,size);
 cout<<endl;
reverse(arr,size);

print(arr,size);

    return 0;
}