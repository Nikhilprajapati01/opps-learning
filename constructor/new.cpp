#include<iostream>
#include<string>
using namespace std;
class Hero {
        private:
        int health;
        int score;
        char name;



     public:
   


      Hero( int health , char word){
        this->health = health;
        this->name  = word;
      }



      Hero(Hero & temp){
        cout<<"copy ";
        this->health = temp.health;
        this->name = temp.name;
      }


     int print (){
        cout<<health<<endl<<name<<endl;
     }
    };
int main(){
    // Hero amit(50);
    //  cout<<amit.print();



     Hero ram(70 , 'v');
    //  cout<<"it is ram = ";
    //  ram.print();

// copy constructor 
     Hero syam(ram);
     syam.print();
}


