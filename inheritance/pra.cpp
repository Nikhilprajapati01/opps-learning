#include<iostream>
#include<string>
using namespace std;
class human{
    private:
    int age;
    int weight;

    public:
    void setage(int age){
        this -> age = age;
    }

    int getage (){
       return  age;
    }
};

class child: public human{
    public:
     int color;

     void sleep(){
        cout<<"nikhil calling"<<endl;
     }
};

int main(){
   child second;
    second.setage(40);
  
   cout<<second.getage()<<endl;
   second.sleep();

    return 0;
}