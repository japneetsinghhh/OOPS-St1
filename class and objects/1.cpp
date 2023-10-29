#include <iostream>
using namespace std;
class Car
{
    int engine;
    int price;

public:
    void set(int e, int p)
    {
        engine = e;
        price = p;
    }
    int get_engine()
    {
        return engine;
    }
    int get_price()
    {
        return price;
    }
};
int main(){
    Car c1;
    
}