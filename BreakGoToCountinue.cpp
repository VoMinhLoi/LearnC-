//#include<iostream>
//#include<cmath>
//main(){
//	int a,b;
//	std::cin >> a >>b;
//	if(a == 0 && b == 0)
//		std::cout <<"Phuong trinh co vo so nghiem";
//	else
//		if(a==0 && b !=0)
//			std::cout <<"Phuong trinh co vo so nghiem";
//		else
//			std::cout <<-b/a;
//	return 0;
//}
#include<iostream>
#include<cmath>
main(){
//	int n, tong;
//	std::cin >> n;
//	for(int i = 1; i <= n; i++){
//		if(i%2!=0)
//			tong += i;
//	}
//	std::cout << tong;
//	float degC, degF;
//	std::cin >> degF;
//	degC = (degF - 32) / 1.8;
//	std::cout << degC;

//cau 4
	int snt;
	std::cin >> snt;
	int d;
	for(int i = 2; i<= sqrt(snt);i++){
		if(snt % i == 0){
			++d;
			break;
		}
	}
	if(d == 0)
		std::cout << snt << " la so nguyen to";
	else
		std::cout << snt << " khong phai la so nguyen to";
		
//	int so;
//	std::cin << so;
//	int nghin, tram, dv;
//	nghin = so % 1000;
}
