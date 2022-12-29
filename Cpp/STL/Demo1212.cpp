// Iterator(Pointer)

#include <iostream>
#include <vector>

int main(){

        std::vector<int> v = {10,20,30,40,50};

     std::vector<int>::iterator itr ; 
/*     for(auto itr = v.begin() ; itr != v.end() ; itr++){
                  *itr = 70 ;                                        // saglikade 70 value
                std::cout << *itr <<std::endl;
        }         */

/*        for(auto itr = v.cbegin() ; itr != v.cend() ; itr++){     // constant Iterator thevaycha asel tr cbegin() ; cend() ; use kartat
                std::cout << *itr <<std::endl;
        } */

/*      for(auto itr = v.rbegin() ; itr != v.rend() ; itr++){           // reverse
                std::cout << *itr <<std::endl;
        }
*/
        for(auto itr = v.crbegin() ; itr != v.crend() ; itr++){
                std::cout << *itr <<std::endl;
        }


        return 0 ;
}

