
 >>>NO 1.

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int a,b;
   char ch;
   cout<<"enter your value"<<endl;
   cin>>a;
   cin>>b;
   cout<<"enter your character"<<endl;
   cin>>ch;
   switch(ch){
       case '+':
       cout<<"sum="<<a+b<<endl;
       break;
       case '-':
       cout<<"sub="<<a-b<<endl;
       break;
       case '*':
       cout<<"MUL="<<a*b<<endl;
       break;
       case '/':
       cout<<"DVD="<<a/b<<endl;
       break;
       case '%':
       cout<<"mode="<<a%b<<endl;
       break;
       default:
       cout<<"There is an error in your data"<<endl;
       break;
   }

    return 0;
}

>>>>  2.

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   char ch;
  
 cout<<"enter your character"<<endl;
 cin>>ch;
  switch(ch){
      case 'a':
      cout<<"your character is vowel"<<endl;
      break;
      case 'e':
      cout<<"your character is vowel"<<endl;
      break;
      case 'i':
      cout<<"your character is vowel"<<endl;
      break;
      case 'o':
      cout<<"your character is vowel"<<endl;
      break;
      case 'u':
      cout<<"your character is vowel"<<endl;
      break;
      default:
      cout<<"your character is consonent"<<endl;
      break;
  }

    return 0;
}