#include <iostream>
using namespace std;
// static variables can be directly accessed without creating an object and then accessing it
class Student{
    public:
    char name[100];
    int roll_no;
    static int ct;
    void set(char *n,int r){
        ct++;
        strcpy(name,n);
        roll_no=r;
    }
    int get_roll_no(){
        return roll_no;
    }
    char * get_name(){
        return name;
    }
    void display(){
        cout<<"Name "<<name<<" Roll-no: "<<roll_no<<endl;
    }
    static void print(){
        cout<<ct<<endl;
        cout<<"Static member function called"<<endl;
    }
};
int Student::ct;
int main(int argc, char const *argv[])
{
    Student s1,s2,s3;
    char a[]="abc";
    char b[]="def"; 
    char c[]="fhi";

    s1.set(a,123);
    s2.set(b,234);
    s3.set(c,345);
    s1.display();
    s2.display();
    s3.display();
    cout<<Student::ct<<endl;
    Student::print();
    return 0;
}
