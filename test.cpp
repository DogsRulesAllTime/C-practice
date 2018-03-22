

#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

struct pc{
	int snumber;
	string cpu;
	double frequncy;
	int memory;
};

int main() {
	vector <pc> komp;
	komp.push_back({12334, "i5", 1.7, 16});
	map<int, pc> baza;

	baza[1] = {12334, "i5", 1.7, 16};
	cout <<baza[1].cpu<<endl;




	vector <int> b = {1,2,3,4};

	cout<<b[2]<<endl;
	cout<< "razmer \nmassiva "<<b.size()<< endl;

	map <int, string> f;
	f[1] = "adad";
	cout << f[1]<<f.size()<<endl;

	typedef int cifra; //pereimenovivaem im9 tipa dannih
	cifra zet = 3;
	cout << zet;
	return 0;
}
