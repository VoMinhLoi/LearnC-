#include<iostream>
#include<string>
using namespace std;
void input_number(string message, int &n); 
void input_array(int *array, int size);
void print_array(int *array, int size);
void push_array(int* &array, int &size, int newElement);

int main(){
	int n,y;
	input_number("So luong phan tu: ", n);
	input_number("Phan tu moi: ", y);
	int *mainArray = new int[n];
	input_array(mainArray, n);
	print_array(mainArray, n);
	push_array(mainArray, n, y);
	print_array(mainArray, n);
	cout << endl << mainArray[4];
	return 0;
}

void input_number(string message, int &n){
	cout << message;
	cin >> n;
}

void input_array(int *array, int size){
	cout << "Nhap mang: " << endl;
	for(int i = 0; i < size; i++){
		cout << "Phan tu [" << i <<"]: ";
		cin	>> array[i];
	}
}

void print_array(int *array, int size){
	cout << "In mang: ";
	for(int i = 0; i < size; i++)
		cout << array[i] << " ";
}

void push_array(int* &array, int &size, int newElement){
	cout << "Them phan tu " << newElement << " vao mang.";
	int *tmpArray = new int[size+1];
	for(int i = 0; i < size; i++)
		tmpArray[i] = array[i];
	tmpArray[size] = newElement;
	delete[] array;
	array = tmpArray;
	size++;
}
