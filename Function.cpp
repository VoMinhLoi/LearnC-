#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int so){
	for(int i = 2; i<= sqrt(so); i++)
		if(so % i == 0 || so <= 1)
			return 0;
	return 1;
}
int main(){
	int n;
	cin >> n;
	if(is_prime(n))
		cout << "Prime";
	else
		cout << "Not prime";
	return 0;
}
