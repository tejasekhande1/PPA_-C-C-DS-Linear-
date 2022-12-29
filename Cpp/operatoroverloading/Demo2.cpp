// Extraction (<<)


#include <iostream>
using namespace std;

class C2W{
	int teacher = 2 ;
	int totalLang = 6 ;
	public :
		void disp(){
			cout<< teacher << totalLang<<endl;
		}
	friend ostream operator<<(ostream cout,C2W);
};

	ostream operator

int main(){

	C2W y2022 ;                          // C2W user defined class ahe
	cout<< y2022 ;			

	return 0 ;
}

// Cout la int,float,char print karaych mahiti ahe pn user defined class cha object kasa print karaycha te nast mahiti
