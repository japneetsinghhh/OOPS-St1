#include <iostream>
using namespace std;
class Employee{
    int id;
    char name[100];
    public:
    Employee(char*n,int i){
        strcpy(name,n);
        id=i;
    }
    void display()const{
        id=12;//will throw and error because we cannot change the value of data member inside a constant member function
        cout<<id<<endl;
        cout<<name<<endl;
    }
    void display2(){
        id=12;//able to change the value because not a constant function
        cout<<id<<endl;
        cout<<name<<endl;
    }
};


int main(int argc, char const *argv[])
{
    Employee e("abc",12);
    const Employee f("cde",13);//constant object value can never be changed
    e.display2();
    e.display();
    f.display(); //wont return an error because the function as well as the object are constant
    f.display2();//returns an error because the function is not constant thus it has tendency to change the values
    return 0;
}
