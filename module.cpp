/******************************************************************************

A function that calculates and gives in output the absolute value of an integer
Then it asks for two numbers from user input and gives back the one with the biggest module

*******************************************************************************/
#include <iostream>

using namespace std;
int inserting_num(){
    int num;
    cout<<"Insert a number: "<<endl;
    cin>>num;
    return num;
}
int check_ab_value(int num){
    if(num<0){
    num = num*-1;
    }
    return num;
}
void text(int num,int ab_value){
    cout<<"The absolute value of "<<num<<" is: "<<ab_value<<endl;
    cout<<"Second program is now executed..."<<endl<<"Please insert two numbers "<<endl<<"Number one: ";
}
int cinnum(){
    int num;
    cin>>num;
    return num;
}
int module(int num){
    int modulo = num%2;
    return modulo;
}
void finale (int modulo1, int modulo2, int num1,int num2){
    if(modulo1>modulo2){
        cout<<num1<<" has biggest module, which is: "<<modulo1;
    }
    else{
        cout<<num2<<" has biggest module, which is: "<<modulo2;
    }
}
int main()
{
    int num,ab_value;
    int num1,num2,modulo1,modulo2;
    
    num = inserting_num();      //calling function 1 and assigning it's value to var num
    
    ab_value = check_ab_value(num);     //calling function 2 and assigning it's returning value to ab_value
    
    text(num,ab_value);     //calling [a void] function 3 that prints num and ab_value by putting them in it's parameters
    
    num1 = cinnum();        //calling function 4 which gives num1 user's input
    cout<<"Number two: ";
    num2 = cinnum();        //calling function 4 which gives num2 user's input
    
    modulo1 = module(num1); //calling function 5 which gives in return num1%2
    modulo2 = module(num2); //calling function 5 which gives in return num2%2
    
    finale(modulo1,modulo2,num1,num2);  //calling on the last function which checks which module is the biggest and returns it

    
    return 0;
}


/* Creare una funzione che calcola e restituisce il valore assoluto di un numero intero.
Creare poi un programma che fa inserire due numeri all’utente e dice quale dei due numeri interi ha il modulo maggiore. 
This function calculates and returns the absolute value of an integral number.
The second program makes the user insert two numbers and tells you which one of those two numbers has the biggest module*/
