#include <bits/stdc++.h>
using namespace std;
class User{
    private:
        string userName, password;
    public:
        User(){
            cout<<"Name: ";
            cin>>userName;

            cout<<"password: ";
            cin>>password;
        }
        User(string name, string pass){
            userName = name;
            password = pass;
        }
        string getUserName(){
            return userName;
        }
        string getPassword(){
            return password;
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
        bool LogInUser(){
            string username_, password_;
            cout<<"Username: ";
            cin.ignore();
            cin>>username_;
            
            cout<<"password: ";
            cin.ignore();
            cin>>password_;
             
             for(int i = 0; i< allUsers.size(); i++){
                if (allUsers[i].getUserName()==username_ || allUsers[i].getPassword() == password_) {
                    cout<<"Login success!!";
                    return true;
             }}

             return false;

        }


};

int main(){
    UserManager usermanage;
    int choice;
    do{
    cout<<"1. register User\n";
    cout<<"2. login User\n";
    cout<<"3. Exit\n";
    cout <<"Enter your choice: ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        usermanage.RegisterUser();
        break;
    
    case 2:
        usermanage.LogInUser();
        break;
    
    case 3:
        exit(1);
        break;
    
    default:
        cout<<"invalid choice";
        break;
    }
    }while (1);
    return 0;
}