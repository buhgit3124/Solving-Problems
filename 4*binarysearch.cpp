#include<iostream>
using namespace std;

int binary(int arr[],int size,int finde)
{
int first=0,last=size-1,mid;

while ( first <= last )
{
 mid=(first+last)/2;

 if(arr[mid]==finde){
    return mid;
}
else if (arr[mid]>finde)
{
    last=mid-1;
}
else
{
   first=mid+1; 
}
}

return -1;

}



int main(){
    int n,finde;
    scanf("%d",&n);
    int arr[n];
    cout<<"Enter the array elements in sorted order\n";
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    cout<<"Enter the element to be searched\n";
    cin>>finde;
    int result=binary(arr,n,finde);
     cout<<"the index of the searched element is -- "<<result<<endl;
   
    return 0;
}