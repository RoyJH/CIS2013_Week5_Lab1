#include <iostream>
using namespace std;

#define DEBUG false

void get_primes(int, int);
int get_lcm (int, int);

int main(){
	int first;
	int second;
	int lcm;
	
	cout << "Please enter first number: ";
	cin >> first;
	cout << "Please enter second number: ";
	cin >> second;
	
	lcm = get_lcm(first, lcm);
	cout << "The LCM is: " << lcm << endl;
	get_primes(first, second);
	return 0;
}
void get_primes(int f, int s)
{
	for(int i=f;i<=s;i++){
		bool prime=true;
		for(int p=2;p<i;p++){
			if(i%p==0){
				prime=false;
			}
		}
		if(prime){ cout<< i << "is prime " << endl;
	}
}	
}
int get_lcm(int one, int two){
	 int one_counter = one;
	 int two_counter = two;
	 
	 while (one != two) {
		if(one<two){
		one += one_counter;
		}
		else{
		two += two_counter;
		}
	 }
	return one;
}	