// Online C++ compiler to run C++ program online
#include <iostream>
 using namespace std;
int main() {
   int a,b,c;
   cout<<"enter 3 values"<<endl;
   cin>>a>>b>>c;
    int max = (a>b)?(a>c)?a:c : (b>c)?b:c ; 
    cout<<"Max = "<<max<<endl;
     
     int min =  (a<b)?(a<c)?a:c : (b<c)?b:c ; 
     cout<<"min="<<min<<endl;
    return 0;
}