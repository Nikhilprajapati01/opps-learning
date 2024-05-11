#include<iostream>
using namespace std;



    void display(int a,int b)
    {
       try
       {
      if(b==0)
{   
        throw "divide by zero";
}
 else {
 int c=a/b;
 cout<<" result    "<<c;
 }
       }

 catch( char b[])
{
cout<<"caught an  string exception";
}
}

int main()
{

display(10,2);
return 0;
}