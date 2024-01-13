#include <iostream>
using namespace std;



int main(){
    
        int userinput1,userinput2, userinput3;
        cout << "enter a number for 1,+:2,-:3,*:4,/" << endl;
        cin>>userinput3; 
        cout << "Enter your first number: "<<endl;
        cin>>userinput1;
        cout << "Enter: "<<endl;
        cin >>userinput2; 
        
        if(userinput3=1){
        cout << userinput1+userinput2 << endl;
        }else if(userinput3=2){
        cout << userinput1-userinput2 << endl;
        }
        else if(userinput3=3){
        cout << userinput1*userinput2 << endl;
        }
       else if(userinput3=4){
        cout << userinput1/userinput2 << endl;
        }
        else{
        cout << "invalid choice" << endl;}
}