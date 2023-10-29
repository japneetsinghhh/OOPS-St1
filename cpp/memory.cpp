#include <iostream>
using namespace std;
// int main(){
//     int *a = new int [100];
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// }

// int main(int argc, char const *argv[])
// {
//     int *a=new int;
//     *a=1e9;
//     cout<<*a<<endl;
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int *a=new int;
//     cin>>*a;
//     cout<<*a<<endl;
//     return 0;
// }

int main(int argc, char const *argv[])
{
    int n,m;
    cin>>n>>m;
    int **a=new int*[n];
    for(int i=0;i<n;i++){
        a[i]=new int[m];
    }
    int val=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]=val++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(int i=0;i<n;i++){
        delete[] a[i];
        a[i]=NULL;
    }
    delete[] a;
    a=NULL;
    return 0;
}
