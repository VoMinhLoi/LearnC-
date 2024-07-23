#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct Student {
	string name;
	float gradePoint;
	Student(){};
	Student(string _name, float _gradePoint){
		name = _name;
		gradePoint = _gradePoint;
	}
};
int main(){
	fstream fs;
	fs.open("test.txt");
	if(fs.is_open()){
		int size = 2;
		Student *students = new Student[size];
//		Ghi hoac ghi de file
//		students[0] = Student("Vo Minh Loi", 3.52);
//		students[1] = Student("Le Van Long", 3.52);
//		for(int i = 0; i < size; i++){
//			fs << students[i].name << endl;
//			fs << students[i].gradePoint <<endl;
//		}
//		Doc file
//			getline(fs, students[i].name);
		for(int i = 0; i < size; i++){
			getline(fs, students[i].name);
			fs >> students[i].gradePoint;
			fs.ignore(); // Delete one letter "enter";
		}
		for(int i = 0; i < size; i++){
			cout << students[i].name;
			cout << students[i].gradePoint;
			cout << endl;
		}
	}
	else{
		cout << "Khong the mo man hinh";
		return 1;
	}
//	fs << "Hello world";
	return 0;
}
