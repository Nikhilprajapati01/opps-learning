#include<iostream>
#include<string>
using namespace std;
class Book {
        private:
        char name;
        int price;
        int noofpage;

         public:
           int countbooks(int count){
            if(price < count){
                return 1;
            }
            else{
                return 0;
            }
        }



        void setprice(int p){
             price =  p;
        }
        
        int getprice(){
            return price;
        }
        
       
        
    };
int main(){
    Book  admin;
    admin.setprice(100);
    // cout<<admin.getprice();
    // cout<<admin.countbooks(admin.getprice());
    cout<<admin.countbooks(110);
}