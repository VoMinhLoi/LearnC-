#include<iostream>
#include<string>
using namespace std;
struct SanPham{
	string ten;
	float donGia;
	int soLuong;
	SanPham(){}
	SanPham(string _ten, float _donGia, int _soLuong){
		ten = _ten;
		donGia = _donGia;
		soLuong = _soLuong;
	}
};
struct QuanLy{
	SanPham *sanPhams;
	int length;
	QuanLy(){}
	QuanLy(SanPham _sanPhams[], int _length){
		sanPhams = _sanPhams;
		length = _length;
	}
	void xem_danh_sach(){
		for(int i = 0; i < length; i++)
			cout << sanPhams[i].ten << " " << sanPhams[i].donGia << " " << sanPhams[i].soLuong << endl;
	}
};
int main(){
	SanPham sanPhams[] = {
		SanPham("SP1", 100000, 1),
		SanPham("SP2", 200000, 2),
		SanPham("SP3", 300000, 3)
	};
	QuanLy quanLy(sanPhams, 3);
	quanLy.xem_danh_sach();
	return 0;
}
