// Online C++ compiler to run C++ program online
#include <iostream>
 using namespace std;
int main() {
  int salery,freelance,invesment,other,rent,grocries,transportation,entertainment,otherexpenses,target,permonth;
  char goal;
  cout<<"enter your salery"<<endl;
  cin>>salery;
  cout<<"enter your freelance gig"<<endl;
  cin>>freelance;
  cout<<"enter your invesment"<<endl;
  cin>>invesment;
  cout<<"enter your any other source"<<endl;
  cin>>other;
  if(salery<0){
      cout<<"enter a valid value"<<endl;}
    else if(freelance<0){
      cout<<"enter a valid value"<<endl;}
    else if(invesment<0){ 
       cout<<"enter a valid value"<<endl;}
    else if(other<0){
       cout<<"enter a valid value"<<endl;}
  else { cout<<"your total monthly income="<< salery+freelance+invesment+other <<endl;}
  int totalincome= salery+freelance+invesment+other;
  cout<<"enter your rent expenses"<<endl;
  cin>>rent;
  cout<<"enter your grocries expenses"<<endl;
  cin>>grocries;
  cout<<"enter your transportational expense"<<endl;
  cin>>transportation;
  cout<<"enter your entertainment expenses"<<endl;
  cin>>entertainment;
  cout<<"enter your other expenses"<<endl;
  cin>>otherexpenses;
 if(rent<0){
      cout<<"enter a valid value"<<endl;}
    else if(grocries<0){
      cout<<"enter a valid value"<<endl;}
    else if(transportation<0){ 
       cout<<"enter a valid value"<<endl;}
    else if(entertainment<0){
       cout<<"enter a valid value"<<endl;}
     else if(otherexpenses<0){
       cout<<"enter a valid value"<<endl;}
else {cout<<"your total expenses="<< rent+grocries+transportation+entertainment+otherexpenses<<endl;}
int totalexpenses= rent+grocries+transportation+entertainment+otherexpenses;
if (totalincome>totalexpenses){
    cout<<"GOOD JOB you are doing well"<<endl;}
else if(totalexpenses>totalincome){
   cout<<"reduce your unesstensial expenses like entertainment"<<   endl;}
   cout<<"enter your fanancial goal(e.g; c for car. h for home etc.)"<<endl;
    cin>>goal;
    cout<<"enter target amount you want to save"<<endl;
    cin>>target;
    cout<<"enter how much amount you save every month"<<endl;
    cin>>permonth;
     if(target>0&&target>permonth){
      cout<<target/permonth<<"months will take to achieve your goal"<<endl;}
    else {cout<<"enter a valid amount"<<endl;}
    cout<<"following are some suggestions to reduce your expenses"<<endl;
 if(rent*100/totalincome>40){cout<<"find a affordable place"<<endl;}
     else if(grocries*100/totalincome>20){cout<<"try meal planing to reduce cost"<<endl;}
     else if(transportation*100/totalincome>10){cout<<"look into public transportation"<<endl;}
  cout<<"following is your behaviour according to your income and expenses"<<endl;
 if (totalexpenses*100/totalincome<50){cout<<"you are a conservative spender"<<endl;}
     else if(totalexpenses*100/totalincome>50&&totalexpenses*100/totalincome<80){cout<<"you are moderate spender"<<endl;}
     else {cout<<"you are a extravagent spender"<<endl;}
 return 0;
}