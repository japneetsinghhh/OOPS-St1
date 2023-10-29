#include <iostream>
using namespace std;
class BankAcc{
    int accbal;
    int accno;
    int with;
    int dep;
    public:
    BankAcc(int an,int ab,int w,int d){
        accbal=ab;
        accno=an;
        with=w;
        dep=d;
    }
    void Display()const{
        cout<<"Account balance : "<<accbal<<endl;
        cout<<"Account Number : "<<accno<<endl;
    }
    void WithandDep(){
        accbal-=with;
        accbal+=dep;
        
    }
};
int main(int argc, char const *argv[])
{
    const BankAcc b(101,100,10,0);
    b.Display();
    b.WithandDep();
    return 0;
}
