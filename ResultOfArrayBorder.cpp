#include<iostream>
main(){
	int h, c;
	std::cin >> h >> c;
	int array[h][c];
	for(int i = 0; i < h; i++)
		for(int j = 0; j < c; j++)
			std::cin >> array[i][j];
	int tong;
	for(int i = 0; i < h; i++)
		if(i == 0 || i == h-1)
			for(int j = 0; j < c; j++)
				tong += array[i][j];
		else
			tong += (array[i][0] + array[i][c-1]);
	std::cout << tong;			
}
