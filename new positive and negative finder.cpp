#include<iostream>
using namespace std;

int main () {
      while(true){
      int userinput;
      cout << "enter your number(enter'0' to exit)" << endl;
      cin>>userinput;
      
      if(userinput==0){
      cout << "exiting to the program" << endl;
      break;
      }
      else if(userinput>0){
      cout << "your number is positive" << endl;
      }
      else{
      cout << "your number is negative" << endl;
      }
    }  

}