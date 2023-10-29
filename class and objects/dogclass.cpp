#include <iostream>
using namespace std;
class Dog{
    private:
    char species[100];
    char name[100];
    int age;
    public:
    void set(char*s, char*n, int a);
    char *spe();
    char *nam();
    int Age();
};
void Dog::set(char*s, char*n, int a){
    strcpy(species,s);
    strcpy(name,n);
    age=a;
}
char* Dog::spe(){
    return species;
}
char* Dog::nam(){
    return name;
}
int Dog::Age(){
    return age;
}
int main(int argc, char const *argv[])
{
    
    return 0;
}
