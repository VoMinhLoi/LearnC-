#include<iostream>
#include<cmath>
main(){
	int n, tong;
	tong = 1;
	std::cin >> n;
	for(int i=1;i<=n;i++){
//		tong += pow(i,2);
//		tong *= i;
		if(i%5==0)
			std::cout << i << " ";
	}
//	std::cout << tong;
}
