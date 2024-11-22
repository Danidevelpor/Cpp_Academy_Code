// Online C++ compiler to run C++ program online
#include <iostream>
 using namespace std;
int main() {
   int weight,age,ch;
   float height;
   cout<<"enter your weight in (kg)"<<endl;
   cin>>weight;
   cout<<"enter your height in (meter)"<<endl;
   cin>>height;
   cout<<"enter your Age"<<endl;
   cin>>age;
  
    float BMI=weight / (height*height);
     cout<<"your BMI="<<BMI<<endl;
    if(BMI<18.5){
        cout<<"your BMI is under weight"<<endl;
        
    }
    else if(BMI>18.5&&BMI<24.9){
        cout<<"your BMI is normal weight"<<endl;
        
    }
    else if(BMI>25&&BMI<29.9){
        cout<<"your BMI is over weight"<<endl;
        
    }
    else{
        cout<<"your BMI is obese weight"<<endl;
        
    }
    
    cout<<"select 1,2,3 OR 4 according to your exercise"<<endl;
    cout<<"1. None"<<endl;
    cout<<"2. Light Exercise(e.g., walking)"<<endl;
    cout<<"3. Moderate Exercise(e.g., jogging)"<<endl;
    cout<<"4. Vigorous Exercise(e.g., intense cardio or weight lifting)"<<endl;
    cin>>ch;
    if(ch==2){
        cout<<"your exercise routine is light"<<endl;
        
    }
    else if(ch==1){
        cout<<"Start with light exercises like walking"<<endl;
        
    }
    else if(ch==3){
        cout<<"your exercise type is moderate"<<endl;
        
    }
    else{
        cout<<"your exercise type is vigorous"<<endl;
        
    }
    if(BMI<18.5){
    cout<<"your BMI is underweight. Take proper Diet and start light exerise to maintain your BMI"<<endl;
        
    }
    else if(BMI>18.5&&BMI<24.9){
        cout<<"good your BMI is perfect. follow regular diet and your exercise"<<endl;
        
    }
    else if(BMI>25&&BMI<29.9){
        cout<<"your BMI is overweight. follow a good Diet and start moderate exercise regularly"<<endl;
        
    }
    else{
        cout<<"your BMI is obese. follow proper Diet and start regular vigorous exerise"<<endl;
        
    }
    int fitnessgoal;
    int targetweight,current,permonth;
    cout<<"enter your fitness goal.(e,g; 1. for weight loss an 2 for weight Gain"<<endl;
    cin>>fitnessgoal;
    cout<<"enter your target weight"<<endl;
    cin>>targetweight;
    cout<<"enter your current weight"<<endl;
    cin>>current;
    cout<<"how much weight you gain or loss permonth"<<endl;
    cin>>permonth;
    if(fitnessgoal == 1){
        cout<<(current-targetweight) / permonth<<" months will required to reach your targetweight"<<endl;
        
    }
    else if(fitnessgoal== 2){
        cout<<(targetweight-current) / permonth<<" months will required to reach your targetweight"<<endl;
        
    }
    else{ 
        cout<<"There is an error in your data"<<endl;
        
    }
    if(ch==2){cout<<"your exercise is light.Try to Increase it and go to advance level for good and strong muscles"<<endl;
        
    }
    else if(ch==3){cout<<"Your exercise intensity is Moderate. You are doing great. Try increasing the duration of your workouts for better results."<<endl;
        
    }
    else if(ch==4){cout<<"Your exercise intensity is Vigorous.Ensure you are getting enough rest between workouts to prevent overtraining."<<endl;
        
    }
    else { 
        cout<<"There is an error in your data"<<endl;
        
    }
 
    float  normal = BMI>18.5&&BMI<24.9;
    float  high = BMI>25&&BMI<29.9;
    float  obese = BMI>30;
  
    if(BMI=normal){
      cout<<"GOOD . you are physically Fit"<<endl;
        
    }
    else if(BMI=high){
        cout<<"you need improvenment"<<endl;
        
    }
    else if(BMI=obese){
        cout<<"you are unhealthy"<<endl;
        
    }
    else { 
        cout<<"There is an error......"<<endl;
        
    }
    
     return 0;
}




