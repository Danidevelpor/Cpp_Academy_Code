// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int x,y;
   char ch;
   cout<<"enter your value"<<endl;
   cin>>x>>y;
   cout<<"enter your character"<<endl;
   cin>>ch;
   if(ch=='+'){
       cout<<"sum="<<x+y; }
   else if(ch=='-'){
       cout<<"sub="<<x-y;}
  else if(ch=='*'){
        cout<<"mul="<<x*y;}
  else if(ch=='/'){
         cout<<"dvd="<<x/y;}
  else if(ch=='%'){
       cout<<"mode="<<x%y;}
   
      return 0;
}    
