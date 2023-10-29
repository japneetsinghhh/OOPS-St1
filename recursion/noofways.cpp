#include <iostream>
using namespace std;
int stairs(int n,int step){
    //base case
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    int ans=0;
    for(int i=1;i<=step;i++){
        ans+=stairs(n-i,step);
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int step;
    cin>>step;
    cout<<stairs(n,step);
    return 0;
}
