#include<iostream>
using namespace std;
main(){	
//  cau 1: them 1 phan tu vao cuoi mang
//	int n, numbers[11];
//	do {
//		std::cin >> n;
//	}
//	while(n > 11);
//	for(int i = 0; i < n - 1; i++){
//		std::cin >> numbers[i];
//	}
//	std::cin >> numbers[n-1];
//	for(int i = 0; i < n; i++){
//		std::cout << numbers[i];
//	}

//  cau 2
//	int n, numbers[11];
//	do {
//		std::cin >> n;
//	}
//	while(n > 11);
//	for(int i = 0; i < n; i++){
//		std::cin >> numbers[i];
//	}
//	for(int i = 0; i < n; i++)
//		std::cout << numbers[i] << " ";
//	int x;
//	do {
//		std::cin >> x;
//	}
//	while (0 > x || x > n);
//	int d = 0;
//	while(d < n){
//		if(d == x){
//			for(int j = x; j < n; j++){
//				int next = 1+j;
//				numbers[j] = numbers[next];
//			}
//			break;
//		}
//		d++;
//	}
//	for(int i = 0; i < n - 1; i++)
//		std::cout << numbers[i] << " ";

//	Cau3: them x va them y vao vi tri x cua mang
	int n, numbers[12];
	do {
		std::cin >> n;
	}
	while(n > 11);
	for(int i = 0; i < n; i++){
		std::cin >> numbers[i];
	}
	for(int i = 0; i < n; i++)
		std::cout << numbers[i] << " ";
	int x, y;
	do {
		std::cin >> x;
	}
	while (0 > x || x > n);
	std::cin >> y;
	int d = 0;
	n++;
	while(d < n){
		if(d == x){
			for(int j = n; j > x; j--)
				numbers[j] = numbers[j - 1];
			break;
		}
		d++;
	}
	numbers[x] = y;
	for(int i = 0; i < n; i++)
		std::cout << numbers[i] << " ";
	return 0; 
}
