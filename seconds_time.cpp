/******************************************************************************

This program converts hour+minutes+seconds into seconds by using solely functions

*******************************************************************************/

#include <iostream>

using namespace std;

void text(){
    cout<<"Please insert a time in this format: 'hour:minutes:seconds'"<<endl;
}
void errortext(){
    cout<<"Error, please try again";
}


int input(){
    
    int num;
    cin>>num;
    return num;
    
}

bool check(int hour,int minutes,int seconds, bool &flag){
    
    if(hour<=24 && hour>=0 && minutes<=60 && minutes>=0 && seconds<=60 && minutes>=0){
        flag=true;
    }
    else {
    flag = false;
    }
    return flag;
}

void hoursinseconds(int hour,int minutes,int seconds){
        int totalmin=0,totalseconds=0;
        
        totalmin = hour*60;
        totalmin=totalmin+minutes;
        
        totalseconds=totalmin*60;
        totalseconds = totalseconds+seconds;
        
        cout<<endl<<totalseconds;
        
}
int main()
{
    int hour,minutes,seconds,hour2,minutes2,seconds2;
    bool flag=false;
    
    text();
    hour=input(); cout<<hour<<":"; minutes=input(); cout<<hour<<":"<<minutes<<":"; seconds=input();
    text();
    hour2=input(); cout<<hour2<<":"; minutes2=input(); cout<<hour2<<":"<<minutes2<<":"; seconds2=input();
    
    check(hour,minutes,seconds,flag);
    
    if(flag){
        
        cout<<"First Time's Input in seconds: ";
        hoursinseconds(hour,minutes,seconds);
    }
    else{
        errortext();
    }
    
    check(hour2,minutes2,seconds2,flag);
    
    if(flag){
        
        cout<<endl<<endl<<"Second Time's Input in seconds: ";
        hoursinseconds(hour2,minutes2,seconds2);
    }
    else{
        errortext();
    }
    
    
    return 0;
}
