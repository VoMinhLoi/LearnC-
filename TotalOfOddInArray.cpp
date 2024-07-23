//https://github.com/buiduclong0511/cpp-exercise/blob/main/06.%20B%C3%A0i%20t%E1%BA%ADp%20ch%C6%B0%C6%A1ng%2004.md#b%C3%A0i-3-vi%E1%BA%BFt-ch%C6%B0%C6%A1ng-tr%C3%ACnh-nh%E1%BA%ADp-v%C3%A0o-2-ma-tr%E1%BA%ADn-c%C3%B3-n-h%C3%A0ng-v%C3%A0-m-c%E1%BB%99t-0--n--10-0--m--10-in-ra-t%E1%BB%95ng-c%E1%BB%A7a-2-ma-tr%E1%BA%ADn
#include<iostream>
int main(){
	int h, c;
	std::cin >> h >> c;
	int array1[h][c];
	int tong;
	for(int i = 0; i < h; i++)
		for(int j = 0; j < c; j++){
			std::cin >> array1[i][j];
			if(array1[i][j] % 2 != 0)
				tong += array1[i][j];
		}
		
	std::cout << tong;
	return 0;
}
