// #include<iostream>
// using namespace std;

// int fact(int n){
// 	// base case
// 	if(n==0){
// 		return 1;
// 	}
//     return n*fact(n-1);
// }

// int main(){
// 	int n = 5;
// 	cout<< fact(n) <<endl; // will give us the factorial of n
// 	return 0;
// }

#include<iostream>
using namespace std;

int fib(int n){
	// base case
	if(n==1){
		return 1;
	}
	if(n==0){
		return 0;
	}
	// recursive case
	int cp1 = fib(n-1);
	int cp2 = fib(n-2);
	int bp = cp1+cp2;   
	return bp;
}
// 0 1 1 2 3 5 8 13 21 
int main(){
	int n = 8;
	cout<< fib(n) <<endl;
	return 0;
}
