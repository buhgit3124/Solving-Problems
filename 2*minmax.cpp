#include<iostream>
using namespace std;

int min(int arr[],int size){
    int i,temp=arr[0];
    for (i=0;i< size;i++){
        
        if(temp > arr[i]){
            temp=arr[i];
        }
    }
    return temp;
}
int max(int arr[],int size){
    int i,temp=arr[0];
    for (i=0;i< size;i++){
        
        if(temp < arr[i]){
            temp=arr[i];
        }
    }
    return temp;
}
void print(int arr[],int size){

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    cout<<"Enter the size of array and the array itself after pressing enter "<<endl;

    int n;
    scanf("%d",&n);
    int arr[n];
 
 for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
 }
print(arr,n);
cout<<endl;

cout<<max(arr,n)<<" is the max element\n";

cout<<min(arr,n)<<" is the min element\n";

return 0;

}
