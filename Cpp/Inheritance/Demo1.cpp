
#include <iostream>
using namespace std;

class Player{
	string name ;
	int jerNo ;
	
	public:

	Player(){

	}

	Player(string name,int jerNo){
		this->name = name ;
		this->jerNo = jerNo ;
	}

	void details(){
		cout<< name <<endl;
		cout<< jerNo <<endl;
	}
};

class Cricket{
	Player cric ;
	int runs;

	public:
	Cricket(const Player& cric,int runs){
		this->cric = cric ;
		this->runs = runs ;
	}

	void info(){
		cric.details();
		cout<< runs <<endl;
	}
};

class Football{
	Player foot;
	int goals;

	public:
	Football(const Player& foot,int goals){
		this->foot = foot;
		this->goals = goals ;
	}

	void info(){
		foot.details();
		cout<< goals <<endl;
	}
};

int main(){

	Cricket obj1({"Rohit",45},12000);
	Football obj2({"Messi",10},1000);

	obj1.info();
	obj2.info();

	return 0 ;
}

/* Composition : Dusarya class cha object eka class madhe add karane
 */
