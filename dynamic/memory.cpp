#include<iostream>
#include<string>
using namespace std;
class Hero {
        private:
        int health;
        int score;




        public:
         void sethealth(int h){
            health = h;
         }

         void setscore(int s){
            score = s;
         }

         int gethealth(){
            return health;
         }
         int getscore(){
            return score;
         }
    
    };
int main(){
    Hero amit;


//  staticly allocation
    amit.sethealth(45);
    amit.setscore(34);


    cout<<amit.gethealth()<<endl;
    cout<<amit.getscore()<<endl;

// dinamicly allocation 

Hero *min = new Hero;

min -> sethealth(43);
min -> setscore(56);

cout<<min -> gethealth()<<endl;
cout<<min -> getscore()<<endl;


}