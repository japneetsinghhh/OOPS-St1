#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a[100000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[100000];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int out[100000];
    int i=0,j=0,k=0;
    while(i<n and j<m){
        if(a[i]<b[j]){
            out[k]=a[i];
            i++;
            k++;
        }
        else{
            out[k]=b[j];
            j++;
            k++;
        }
    }
    while(j<m){
        out[k]=b[j];
        j++;
        k++;
    }
    while(i<n){
        out[k]=a[i];
        i++;
        k++;

    }
    for(int i=0;i<n+m;i++){
        cout<<out[i]<<" ";
    }
    return 0;
}
