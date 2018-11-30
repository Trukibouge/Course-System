#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "student.h"
#include "list_student.h"
#include "list_course.h"

using namespace std;

string system_login();
void system_running(const string& user_id);
void system_logout();

string system_login(){
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
                cout << "Wrong password"<<endl;
                return "";
            }
            else{
                cout << "Successfully connected: " << Full_List_Student.get_id(i) << endl;
                return Full_List_Student.get_id(i);
            }
        }
    }

    if(user_found == false)
        cout << "User not found"<<endl;
        return "";
};

void system_running(const string& user_id){
    bool running = true;
    int in_command;
    while(running == true){
        cout << "1. Check my current planning" << endl << "2. Browse available courses" << endl << "3. Logout" << endl << ">>";
        cin >> in_command;
        if(in_command == 1){

        }

        else if(in_command == 2){
        
        }

        else if(in_command == 3){
            cout << "Logging out..." << endl;
            running = false;
        }

        else
            cout << "Erroneous command. Please try again" << endl;
    }


}

int main(){
    string connect_id = system_login();
    if(connect_id != "")
        system_running(connect_id);
    cout << "Course system shutting down..." <<endl;

    /* Display test
    List_Student ListS1("Account.txt");
    ListS1.display();
    List_Course ListC1("Course.txt");
    ListC1.display();
    */
    return 0;
}
