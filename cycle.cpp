#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	int option, i, tabel;
	i = 0;
	map<int, string> user;
	string enter_msg = "enter the number";
	cout << enter_msg;
	cin >> option;
	while (option!=0){
		if(option==1){
			cout << "enter the name";
			cin >> user[i];
			i++;
		};
		if(option==2){
					cout << "enter the numb from "<<i;
					cin >> tabel;
					cout << "name with number "<< tabel<<" is "<< user[tabel]<< endl;
					i++;
				};
		cout << enter_msg;
		cin >> option;
	}
	cout<<"end of app";
	return 0;
};
