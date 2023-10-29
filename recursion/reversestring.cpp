#include<iostream>
#include <string>
using namespace std;
void print_Reverse(char* a,int n){
    // base case
    if(n==0){
        return;
    }

    // recursive case
    cout<<a[n-1];
    print_Reverse(a,n-1);
}
int main(){
    char a[100];
    cin.getline(a,1000);
    int n=strlen(a);
    print_Reverse(a,n);
    return 0;
}
