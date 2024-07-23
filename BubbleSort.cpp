#include<iostream>
int main(){
	int n;
	std::cin >> n;
//	char array[n];
	int array[n];
	for(int i = 0; i < n; i++)
		std::cin >> array[i];
//	std::cout << std::endl;
//	std::cout << "Mang: ";
//	for(int i = 0; i < n; i++)
//		std::cout << array[i] << " ";
	for(int i = n - 1; i > 0; i--)
		for(int j = 0; j < i; j++)
			if(array[j] < array[j+1]){
				char tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
//	std::cout << "\n";
//	std::cout << "Sau khi sap xep noi bot, mang: ";
	for(int i = 0; i < n; i++)
		std::cout << array[i] << " ";
	return 0;
}
