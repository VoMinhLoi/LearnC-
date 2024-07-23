//https://github.com/buiduclong0511/cpp-exercise/blob/main/06.%20B%C3%A0i%20t%E1%BA%ADp%20ch%C6%B0%C6%A1ng%2004.md#b%C3%A0i-3-vi%E1%BA%BFt-ch%C6%B0%C6%A1ng-tr%C3%ACnh-nh%E1%BA%ADp-v%C3%A0o-2-ma-tr%E1%BA%ADn-c%C3%B3-n-h%C3%A0ng-v%C3%A0-m-c%E1%BB%99t-0--n--10-0--m--10-in-ra-t%E1%BB%95ng-c%E1%BB%A7a-2-ma-tr%E1%BA%ADn
#include<iostream>
int main(){
	int n, k;
	std::cin >> n >> k;
	int array[n];
	for(int i = 0; i < n; i++)
		std::cin >> array[i];
	std::cout << "Ket qua: ";
	for(int i = 0; i < n - 1; i++)
		for(int j = i + 1; j < n; j++)
			if(array[i] + array[j] == k)
				std::cout << i << " " << j << " ;";
	return 0;
}
