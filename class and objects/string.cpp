#include<iostream>
#include<cstring>
using namespace std;
class  Student{
private:
    char name[100];
    int roll_no;
public:
    void set(char *n,int r){
        strcpy(name,n);
        roll_no=r;
    }
    char* get_name(){
        return name;
    }
    int get_roll_no(){
        return roll_no;
    }
};
int main(int argc, char const *argv[])
{
    Student s1;
    char b[100]="Japneet";
    s1.set(b,1234);
    cout<<"name: "<<s1.get_name()<<endl;
    cout<<"roll no: "<<s1.get_roll_no()<<endl;
    return 0;
}
