#include<iostream>
#include<string>
using namespace std;
class player {
        private:
        int health;
        int  score;



        public:
         void setScore(int s){
            score = s;
         }

         void sethealth(int h){
            health = h;
         }

         int  getscore(){
            return score;
         }
         int gethealth(){
            return health;
         }
      
        
    };
int main(){
    player nikhil;
    nikhil.setScore(50);
     nikhil.sethealth(10);
    cout<<nikhil.getscore()<<endl;
    cout<<nikhil.gethealth();
  
}