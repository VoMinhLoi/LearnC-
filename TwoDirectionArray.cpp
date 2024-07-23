//#include<iostream>
//main(){
//	int n,m;
//	std::cin >> n >> m;
////	int array[n][m];
////	std::cin >> n;
////	int array[n];
//	int tong;
//	int gtln;
//	for(int i = 0; i < n; i++)
////		for(int j = 0; j < m; j++){
////			std::cin >> array[i][j];
////			tong += array[i][j];
////		}
//	{
//		std::cin >> array[i];
//		if(gtln < array[i])
//			gtln = array[i];
//	}
////	std::cout << tong;
//	std::cout << gtln;
//	return 0;
//	
//}
#include<iostream>
main(){
	int n,m;
	std::cin >> n >> m;
	int array[n][m];
	for(int i = 0; i < n; i++)		
		for(int j = 0; j < m; j++)
			std::cin >> array[i][j];
		
	for(int i = 0; i < n; i++){
		int GTLNNumber=0;
		for(int j = 0; j < m; j++)
			if(GTLNNumber < array[i][j])
				GTLNNumber = array[i][j];
		std::cout << GTLNNumber;
	}
		
}
