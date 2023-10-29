#include<iostream>
using namespace std;
int B(int n);
int A(int n){
    if(n==0){
        return 0;
    }
    return n+B(n-1);
}
int B(int n){
        if(n==0){
        return 0;
    }
    return n+A(n-1);
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int sum=A(n);
    cout<<sum<<endl;
    return 0;
}