#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	getline(cin,str);
//	Delete space at head, foot
	while(str[0] == ' ')
		str.erase(0,1);
	while(str[str.length() - 1] == ' ')
		str.erase(str.length() - 1,1);
	int i = 1;
//	Delespace at middle
	while(i < str.length())
		if(str[i] == ' ' && str[i+1] == ' ')
			str.erase(i,1);
		else
			i++;
//  Lower case sentence
	for(int i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);	
//  Upper case firt letter
	if(str[0] != ' ')
		str[0] = toupper(str[0]);
	for(int i = 1; i < str.length()-1; i++)
		if(str[i]==' ')
			str[i+1] = toupper(str[i+1]);
	cout << str;
	return 0;
}
