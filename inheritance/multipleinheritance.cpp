#include<iostream>
#include<string>
using namespace std;
class human{
    private:
    int age;
    int weight;

    public:
    void speek(){
        cout<<"speeking"<<endl;
    }

};

class animal {
  public:
  int color;

  public:
  void barking(){
    cout<<"barking";
  }
};

class hybrid: public human,public animal{

};


int main(){
 
    hybrid h1;
    h1.speek();
    h1.barking();
    return 0;
}