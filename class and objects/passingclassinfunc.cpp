// #include <iostream>
// using namespace std;
// class Dog{
//     public:
//     char name[100];
//     char species[100];

// };
// void display(Dog d){
//     cout<<"name: "<<d.name<<" species: "<<d.species<<endl;
// }
// int main(int argc, char const *argv[])
// {
//     Dog d;
//     strcpy(d.name,"abc");
//     strcpy(d.species,"pug");
//     display(d);
//     return 0;
// }

#include<iostream>
using namespace std;
class Complex{
    public:
    int real;
    int imaginary;
    void subtract(Complex m);
    void addition(Complex m);
    void multiplication(Complex m);
};
    void Complex::subtract(Complex m){
        cout<<"Sub is "<<real-m.real<<" + i "<<imaginary-m.imaginary<<endl;
    }
    void Complex::multiplication(Complex m){
        int mr=real*m.real-imaginary*m.imaginary;
        int mi=real*m.imaginary+imaginary*m.real;
        cout<<"Mul is "<<mr<<" + i "<<mi<<endl;
    }
    void Complex::addition(Complex m){
        cout<<"Add is "<<real+m.real<<" + i "<<imaginary+m.imaginary<<endl;
    }
// void calculate(Complex c1,Complex c2){
//     int addr=c1.real+c2.real;
//     int addi=c1.imaginary+c2.imaginary;
//     int subr=c1.real-c2.real;
//     int subi=c1.imaginary-c2.imaginary;
//     cout<<"add is "<<addr<<"+i"<<addi<<endl;
//     cout<<"sub is "<<subr<<"+i"<<subi<<endl;
// }
int main(int argc, char const *argv[])
{
    Complex c1,c2;
    c1.real=10;
    c1.imaginary=5;
    c2.real=5;
    c2.imaginary=2;
    c1.subtract(c2);
    c1.addition(c2);
    c1.multiplication(c2);
    return 0;
}
