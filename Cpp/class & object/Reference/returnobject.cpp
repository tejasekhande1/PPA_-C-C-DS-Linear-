// return object by function in class

#include <iostream>
using namespace std;

class Podcast{
	
	string ChannelName;
	string host;
	int dur;

	public:
	Podcast(string ChannelName,string host,int dur){
		cout<< "parameterized Constructor"<<endl;
		this->ChannelName = ChannelName ;
		this->host = host ;
		this->dur = dur ;
	}

	Podcast(const Podcast &ref){                                
		cout<<"Copy Constructor"<<endl;
	} 

	Podcast dispDetails(Podcast &ref){                    // ------> Podcast ha return type aahe
		return ref ;
	}
};

int main(){
	
	Podcast obj1("BeerBiceps","R Allahabadia",2);
	Podcast obj2 = obj1 ;
	Podcast obj3 = obj1.dispDetails(obj2);

	return 0 ;
}


// Copy Constructor ha call kdhi hoto : 1) Parameter mhnun constructor la object pthavta 2) assign one object to another object 3) ekhadya function mdhun obj return karto
// jevha ekhadya function mdhun return value mhnun object gheto tyaveli const ha compulsory lagto
