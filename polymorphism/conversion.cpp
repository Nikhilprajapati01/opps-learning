#include<iostream>
using namespace std;

class complax {
    private:
    int a ,b;
    public:



   complax(){
    
   }
    complax(int x){
           a = x;
           b = 0;
    }
    void showdata(){
        cout<<a<<" "<<b;
    }
};

int main(){
    complax c1;
    int x=5;
    c1=x;
    c1.showdata();
}