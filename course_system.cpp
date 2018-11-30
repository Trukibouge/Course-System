#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "student.h"
#include "list_student.h"
#include "list_course.h"

using namespace std;

string system_login();
void system_running(const string username);
void system_logout();

string system_login(){
    cout << "allo";
    List_Student Full_List_Student("Account.txt");
    bool user_found = false;
    string username;
    string password;
    cout << "*~*~*~* Bagaieth Corp. Course System Copyright (c) 2018  *~*~*~*" << endl << endl;
    cout << "username: ";
    cin >> username;
    cout << "password: ";
    cin >> password;
    for(int i = 0; i < Full_List_Student.get_size(); i++){
        if(username == Full_List_Student.get_username(i)){ 
            user_found = true;           
            if(password != Full_List_Student.get_password(i)){
                cout << "Wrong password";
                return "";
            }
            else{
                cout << "Successfully connected: " << Full_List_Student.get_id(i) << endl;
                return Full_List_Student.get_id(i);
            }
        }
    }

    if(user_found == false)
        cout << "User not found";
        return "";
};

int main(){
    string connect_id = system_login();
    
    /* Display test
    List_Student ListS1("Account.txt");
    ListS1.display();
    List_Course ListC1("Course.txt");
    ListC1.display();
    */
    return 0;
}
