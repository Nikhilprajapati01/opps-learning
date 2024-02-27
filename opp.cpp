#include<iostream>
#include<string>
using namespace std;
class player {
        public:
        int health;
        int  score;
      
        
    };
int main(){
    player nikhil;
         nikhil.health = 100;
         nikhil.score = 40;
        cout<<nikhil.health<<endl;
        cout<<nikhil.score<<endl;
}