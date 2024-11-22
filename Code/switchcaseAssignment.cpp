// Online C++ compiler to run C++ program online
#include <iostream>
 using namespace std;
int main() {
  int a,b,c,d,e,f;
  char ch;
  cout<<"enter your value"<<endl;
   cin>>e;
   cin>>f;
   cout<<"enter your character"<<endl;
   cin>>ch;
   switch(ch){
       case '+':
       cout<<"sum="<<e+f<<endl;
       break;
       case '-':
       cout<<"sub="<<e-f<<endl;
       break;
       case '*':
       cout<<"MUL="<<e*f<<endl;
       break;
       case '/':
       cout<<"DVD="<<e/f<<endl;
       break;
       case '%':
       cout<<"mode="<<e%f<<endl;
       break;
       default:
       cout<<"There is an error in your data"<<endl;
       break;
   }
  
  cout<<"enter your value between (1 to 3)"<<endl;
  cin>>a;
  switch(a){
      case 1: 
      cout<<"Traffic light is Red"<<endl;
      break;
      case 2:
      cout<<"Traffic light is yellow"<<endl;
      break;
      case 3:
      cout<<"Traffic light is green"<<endl;
      break;
  default:
      cout<<".....Data Error......."<<endl;
  }
     cout<<"select number between (1 to 7)"<<endl;
    cout<<"1: Monday"<<endl;
    cout<<"2: Tuesday"<<endl;
	cout<<"3: Wednesday"<<endl;
	cout<<"4: Thursday"<<endl;
	cout<<"5: Friday"<<endl;
	cout<<"6: Saturday"<<endl;
	cout<<"7: Sunday"<<endl;

   cin>>b;
  switch(b){
      case 1:
      cout<<"Day is working day"<<endl;
      break;
      case 2:
      cout<<"Day is working day"<<endl;
       break;
      case 3:
      cout<<"Day is working day"<<endl;
       break;
      case 4:
      cout<<"Day is working day"<<endl;
       break;
      case 5:
      cout<<"Day is working day"<<endl;
       break;
      case 6:
      cout<<"weekend day"<<endl;
       break;
       case 7:
       cout<<"weekend day"<<endl;
       break;
  default:
       cout<<"......Data Error......."<<endl;
       
  }
     cout<<"enter number between 0 to 9"<<endl;
      cin>>c;
  switch(c){
      case 0:
      cout<<"number is zero"<<endl;
      break;
      case 1:
      cout<<"number is one"<<endl;
      break;
      case 2:
       cout<<"number is Two"<<endl;
      break;
      case 3:
       cout<<"number is Three"<<endl;
       break;
     case 4:
      cout<<"number is four"<<endl;
      break;
      case 5:
       cout<<"number is five"<<endl;
       break;
       case 6:
        cout<<"number is six"<<endl;
        break;
        case 7:
         cout<<"number is seven"<<endl;
         break;
         case 8:
          cout<<"number is eight"<<endl;
          break;
          case 9:
           cout<<"number is nine"<<endl;
           break;
    default:
     cout<<".....Data Error...."<<endl;
       
  } 
    cout<<"enter number between 1 to 5"<<endl;
    cin>>d;
    switch(d){
        case 0:
        cout<<"factorial of 0 is 1"<<endl;
        break;
        case 1:
        cout<<"factorial of 1 is 1"<<endl;
        break;
        case 2:
        cout<<"factorial of 2 is 2"<<endl;
        break;
        case 3:
        cout<<"factorial of 3 is 6"<<endl;
        break;
        case 4:
        cout<<"factorial of 4 is 24"<<endl;
        break;
        case 5:
        cout<<"factorial of 5 is 120"<<endl;
        break;
   default:
       cout<<"....Data Error"<<endl;
        
    }
    
    
  
  

    return 0;
}