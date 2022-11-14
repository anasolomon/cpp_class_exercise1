/******************************************************************************

In this program the user will have to insert a password (made of four integers) twice, if the second
password corrisponds with the first then he can proceed to the menu:
0. To terminate the program
1. To access the vault (by inserting his password, if password wrong then return to menu)
2. Change password (by first inserting the old password,if password wrong then return to menu)

*******************************************************************************/

#include <iostream>
using namespace std;

int inpassword(){
    
    int passcode;
    cout<<"Insert a new password"<<endl;
    cin>>passcode;
    return passcode;
    
}

int inpassword2(){
    
    int passcode;
    cout<<"Confirm password"<<endl;
    cin>>passcode;
    return passcode;
    
}

bool checkpass(int passcode, int passcode_check){
    bool flag = false;
    if(passcode == passcode_check){
        flag = true;
        cout<<"Password saved successfully!"<<endl;
    }
    else{
        cout<<"The passwords do not coincide!"<<endl;
    }
    return flag;
}
int menu_text(){
    
    int choice;
    cout<<"Press 0 to terminate the program"<<endl;
    cout<<"Press 1 to access the vault"<<endl;
    cout<<"Press 2 to change your password"<<endl;
    cin>>choice; 
    
    return choice;
}

void choosen_menu(bool &flag2, int passcode, int choice,int &passcode_check, bool &change){
    int password;
    if(choice==1){
        cout<<"Insert password to access the vault: "<<endl;
        cin>>password;
        if (password == passcode){
            cout<<"You've opened your vault"<<endl;
        }
        else{
            cout<<"The password is wrong, try again!"<<endl;
        }
    }
    else if (choice == 2){
        cout<<"You've choosen to change the password, please insert the old one: "<<endl;
        cin>>passcode_check;
        if(passcode_check == passcode){
            cout<<"Password is correct"<<endl;
            change = true;
        }
        else cout<<"Passwrong is incorrect!"<<endl;
    }
    else if (choice == 0){
        flag2 = false;
        cout<<"Program terminated successfully";
    }
}


int main()
{
    int passcode,passcode_check, choice;
    bool flag = false,flag2 = true, change = false;
    
    while(flag == false){
    passcode = inpassword();
    passcode_check = inpassword2();
    flag = checkpass(passcode, passcode_check);
    }
    
    while(flag2){
        
    choice = menu_text();
    
    choosen_menu(flag2, passcode, choice, passcode_check, change);
    if(change){
        passcode = inpassword();
        passcode_check = inpassword2();
        flag=checkpass(passcode, passcode_check);
        change = false;
        }
        
    }
    
    return 0;
}
