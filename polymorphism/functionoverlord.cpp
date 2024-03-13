#include<iostream>
#include<string>
using namespace std;
class human{
    private:
    int age;
    int weight;
    
    public:
    void add(){
        cout<<"add two no"<<endl;
    }
    
    void add(int a){
        cout<<"threenumber";
    }

};


int main(){
   human h1;
   h1.add();

    return 0;
}