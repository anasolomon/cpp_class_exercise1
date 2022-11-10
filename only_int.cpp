/******************************************************************************

This program only accepts an integer that is between 1 and 12, telling you at the end to which month num corresponds to (by using solely functions)

*******************************************************************************/

#include <iostream>
using namespace std;

bool check(float num, bool &flag){
    
    if(num==(int)num && num<13 && num>0){
        flag=false;     //false = will stop the while(true) loop 
    }
	  return flag;
}
void errormessage(){
    cout<<"Error, please insert an integer between 1 and 12: "<<endl;
}
float input(){
    
    float num;
    cin>>num;
    return num;
}
void month(int num);

int main() {
    bool flag=true;         
    float num;
    
    num=input();
    flag=check(num,flag);
    
    
    while(flag){
        errormessage();
        num=input();
        flag=check(num,flag);
    }
    
    month(num);
    
    return 0;
}

void month(int num){
    switch(num){
        case 1:
        cout << "January";
        break;
        case 2:
        cout << "February";
        break;
        case 3:
        cout << "March";
        break;
        case 4:
        cout << "April";
        break;
        case 5:
        cout << "May";
        break;
        case 6:
        cout << "June";
        break;
        case 7:
        cout << "July";
        break;
        case 8:
        cout << "August";
        break;
        case 9:
        cout << "September";
        break;
        case 10:
        cout << "October";
        break;
        case 11:
        cout << "November";
        break;
        case 12:
        cout << "December";
        break;
        
    }
}
