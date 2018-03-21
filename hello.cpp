

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
//sozdanie sobstvennogo tipa dannih
struct human{
	string name;
	int age;
	string gender;
	char fav_char;
};

int main() {
	vector <human>  test;
	test.push_back({" roman",17,"male",'a'});//probel daet otstyp
	cout << test[0].age<<endl <<test[0].name<<endl<<"dfsdfdsfsdf\nsdfdsfsdfsdf"<<endl; // \n delaet perenos stroki


	int n = 8; //celoe 4islo
	double dub = 1.9; //drobnoe 4islo
	char symbol = 'q'; //simvol
	string stroka = "slovo"; //stroka
	cout << stroka<< endl;

	vector<int> kek = {1,5,7,8,9}; //nabor dannih odnogo tipa
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
