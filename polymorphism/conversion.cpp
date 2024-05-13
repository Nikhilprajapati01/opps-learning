#include<iostream>
using namespace std;


// primitive to class
// class complax {
//     private:
//     int a ,b;
//     public:



//    complax(){
    
//    }
//     complax(int x){
//            a = x;
//            b = 0;
//     }
//     void showdata(){
//         cout<<a<<" "<<b;
//     }
// };

// int main(){
//     complax c1;
//     int x=5;
//     c1=x;
//     c1.showdata();
// }



// class to primitive 

class complax {
    private:
    int a;
    int b;

    public:

    void setdata(int x,int y){
        a=x; b=y;
    }

    void showdata(){
           cout<<a<<" "<<b<<endl;
    }
    operator int(){
        return(a+b);
    }
};

int main(){
complax c;
c.setdata(3,5);
c.showdata();
int x;
x=c;
cout<<x;
}