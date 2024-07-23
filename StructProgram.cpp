#include<iostream>
#include<string>
using namespace std;
struct Product{
	string ten;
	float donGia;
	int soLuong;
	Product(){}
	friend istream& operator >>(istream &is, Product &product){
		cout << "Nhap ten: " ;
		cin.ignore();
		getline(is, product.ten);
		cout << "Nhap don gia: ";
		is >> product.donGia;
		cout << "Nhap so luong: ";
		is >> product.soLuong;
		return is;
	}
	friend ostream& operator <<(ostream &os, Product product){
		os << product.ten;
		cout << " ";
		os << product.donGia;
		cout << " ";
		os << product.soLuong;
		return os;
	}
};
int show_menu();
void print_products(Product *products, int size);
void add_product(Product* &products, int &size);
void delete_product(Product* &products, int &size); 
int main(){
//	cin >> product;
//	cout << product;
	int size = 0;
	Product *product = new Product[size];
	while(true){
		switch(show_menu()){
			case 1:
				print_products(product, size);
				break;
			case 2:
				add_product(product, size);
				break;
			case 3:
				delete_product(product, size);
				break;
			case 0:
				cout << "Tam biet.";
				return 0;
			default:
				cout << "Lua chon khong hop le.";
		}
		cout << endl <<"Ban co muon tiep tuc chuong trinh [1/0]? ";
		bool isContinue;
		cin >> isContinue;
		if(!isContinue){
			cout << "Tam biet.";
			return 0;
		}
	}
	return 0;
}

int show_menu(){
	int choosen;
	system("cls");
	cout << "---------- Menu ----------\n";
	cout << "1. Xem danh sach san phan\n";
	cout << "2. Them san pham moi\n";
	cout << "3. Xoa san pham\n";
	cout << "0. Thoat chuong trinh\n";
	cout << "Luu chon cua ban la: ";
	cin >> choosen;
	system("cls");
	return choosen;
}
void print_products(Product *products, int size){
	if(size == 0)
		cout << "Khong co san pham nao.";
	else
		for(int i =0; i< size; i++)
			cout << products[i] <<endl;
};

void add_product(Product* &products, int &size){
	Product new_product;
	cout << "Nhap san pham moi: "<<endl;
	cin >> new_product;
	Product *tmp_products = new Product[size+1];
	for(int i = 0; i< size;i++){
		tmp_products[i] = products[i];
	}
	tmp_products[size] = new_product;
	delete[] products;
	products = tmp_products;
	size ++;
	cout << "Them san pham thanh cong.";
};

void delete_product(Product* &products, int &size){
	if(size == 0)
		cout << "Khong co san pham nao.";
	else{
		string isDeletedName;
		cout << "Nhap ten san phan muon xoa: ";
		cin.ignore();
		getline(cin, isDeletedName);
		int indexOfIsDeletedItem = -1;
		for(int i = 0; i< size; i++)
			if(!isDeletedName.compare(products[i].ten)){
				indexOfIsDeletedItem = i;
				break;
			}
		if(indexOfIsDeletedItem == -1){
			cout << "Khong tim thay san pham";
			return;
		}
			
		Product *tmp_products = new Product[size - 1];
		for(int i = indexOfIsDeletedItem; i < size - 1;i++)
			products[i] = products[i+1];
		size--;
		for(int i = 0; i < size;i++)
			tmp_products[i] = products[i];
		delete[] products;
		products = tmp_products;
		cout << "Xoa san pham " << isDeletedName << " thanh cong.";
	}
};
