#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[]={5,4,3,2,1};
    int temp;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            // temp=arr[j];
            // arr[j]=arr[j+1];
            // arr[j+1]=temp;
            swap(arr[j],arr[j+1]);
        }
    }
    for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    return 0;

}
