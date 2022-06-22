#include<iostream>
using namespace std;

void sort(int arr[],int size);
void print(int arr[],int size);

int main(){
    int n;
    printf("Enter the size of array and the array");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    sort(arr,n);
    print(arr,n);
    return 0;
}

void print(int arr[],int size){

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

void sort(int arr[],int size){

int i,j,temp;
for (i = 0; i < size; i++)
{
    for ( j = i+1; j < size; j++)
    {
      if (arr[i]>arr[j])
      {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
        
    }
    
}

}