// return value byy function

#include <iostream>
using namespace std;

class Cricket{
	
	int score ;

	public:
	Cricket(){
	cout<<"Test Cricket"<<endl;
	}

	Cricket(int score){
	this->score = score ;
	this->score += 100 ;
	}

	int display(){
		return score ;
	}

	float runRate(){
		return 4.25 ;
	}
};

int main(){
	Cricket match;
	Cricket FirstInnings(350);
	int runs = FirstInnings.display();
	cout<< runs <<endl;
	float rRate = FirstInnings.runRate();
	cout << rRate <<endl;

	return 0 ;
}


// Constructor mdhun value return karata yett nahi
