#include <bits/stdc++.h>
using namespace std;
class User{
    private:
        string userName, password;
    public:
        User(string name, string pass){
            userName = name;
            password = pass;
        }
};

class UserManager{
    private:
        vector<User> allUsers;

    public:
        void RegisterUser(){
            string username, password;
            cout<<"Username: ";
            cin>>username;
            
            cout<<"password: ";
            cin>>password;
             
            User newUser(username, password);
            allUsers.push_back(newUser);
            cout<<"User Registration successful!\n";
            
            
            }


};

int main(){
    UserManager usermanage;
    int choice;
    cout<<"1. register User\n";
    cout<<"2. Exit\n";
    cout <<"Enter your choice: ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        usermanage.RegisterUser();
        break;
    
    default:
        break;
    }
    return 0;
}