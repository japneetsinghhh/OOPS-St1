#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a=5;
    int b='A'; //implicit type conversion because int has higher precedence than char
    cout<<b<<endl;
    int *aptr=&a;
    cout<<a<<endl;;
    cout<<&a<<endl;;
    cout<<aptr<<endl;

    float f=11.1;
    float * fptr=&f;
    cout<<f<<endl;
    cout<<&f<<endl;
    cout<<fptr<<endl;

    char ch='A';
    char * chptr=&ch;
    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<chptr<<endl;

    cout<<(int *) chptr<<endl;
    cout<<(float *)chptr<<endl;
    cout<<(void *)chptr<<endl;
    return 0;
}

// 0x16dbaf2ac --> 0x represents that it is a hexadecimal value