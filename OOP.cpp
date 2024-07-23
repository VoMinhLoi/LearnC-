#include<iostream>
using namespace std;
class Animal{
public:
	virtual void action() = 0;
	virtual void eat()=0;
};
class Dog : public Animal{
public:
	void action() {
		cout << "Sua\n";
	}
	void eat(){
		cout << "Xuong\n";
	}
};
class Cat : public Animal{
public:
	void action() {
		cout << "Meo\n";
	}
//	void eat(){
//		cout << "Ca\n";
//	}
};
int main(){
	Dog dog;
	Cat cat;
	dog.action();
	dog.eat();
	cat.action();
	return 0;
}
