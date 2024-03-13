#include<iostream>
#include<string>
using namespace std;
class player {
        public:
      static  int health;
        int  score;
      
        
    };

    int player::health = 5;
int main(){
    cout<<player::health;
}