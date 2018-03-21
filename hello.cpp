

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
	int n = 8; //celoe 4islo
	double dub = 1.9; //drobnoe 4islo
	char symbol = 'q'; //simvol
	string stroka = "slovo"; //stroka
	cout << stroka<< endl;

	vector<int> kek = {1,5,7,8,9}; //nabor dannih
	cout << kek.size()<<endl;
	cout << kek[3];

	vector<string> keku = {"qqq","www","ee"};
	cout << keku[2];

	map<int, char> lol; //kluch - znachenie
	lol[1]=';';
	lol[3]='w';
	cout << lol[3];

//	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
