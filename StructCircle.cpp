#include<iostream>
using namespace std;
struct HinhTron{
	float r;
	HinhTron(){
		
	};
	friend istream& operator >>(istream &is, HinhTron &hinhTron){
		cout << "Nhap ban kinh: ";
		is >> hinhTron.r;
		return is;
	}
	HinhTron(float _r){
		r = _r;
	};
	float chuVi(){
		return r*2 *3.14;
	}
	float DienTich(){
		return r*r*3.14;
	}
};
int main(){
	HinhTron ht1;
	cin >>  ht1;
	cout << ht1.chuVi()<<endl;
	cout << ht1.DienTich();
	return 0;
}
