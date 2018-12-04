#include <iostream>
#include <fstream>
#include <string>
#include <vector>

//#include "student.h"
#include "list_student.h"
#include "list_course.h"
#include "list_planning.h"

using namespace std;

string system_login();
void system_running(const string& user_id);
void system_logout();
void browse_running(const string& user_id, List_Course Full_List_Courses);

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
    List_Course Full_List_Courses("Course.txt");
    List_Course Student_List_Courses;
    bool running = true;
    int in_command;
    while(running == true){
        cout << "1. Check my current planning" << endl << "2. Browse available courses" << endl << "3. Logout" << endl << ">>";
        cin >> in_command;
        if(in_command == 1){ //Check Planning
            bool running_check = true;
            while(running_check == true){
                int browse_in_command;
                cout << "Your planning is: " << endl;
                Student_List_Courses.display();
                cout << "1. Remove course from planning" << endl << "2. Go back" << endl << ">>";
                cin >> browse_in_command;
                if(browse_in_command == 1){
                    string course_to_remove_id;
                    cout << "Please enter the id of the course you wish to remove: " << endl << ">>";
                    cin >> course_to_remove_id;
                    Course course_to_remove = Full_List_Courses.get_course(course_to_remove_id);
                    Student_List_Courses.remove_course(course_to_remove);
                }
                else if (browse_in_command==2){
                    running_check = false;
                }
                else{
                    cout << "Erroneous command. Please try again" << endl;
                }
            }
        }

        else if(in_command == 2){ //Browse Courses
            bool running_browse = true;
            cout << "Available courses:" << endl;
            Full_List_Courses.display_available_courses();
            while(running_browse == true){
                int browse_in_command;
                cout << "1. Add course to planning" << endl << "2. Go back" << endl << ">>";
                cin >> browse_in_command;
            
                if (browse_in_command==1){
                    string course_to_add_id;
                    cout << "Please enter the id of the course you wish to add: " << endl << ">>";
                    cin >> course_to_add_id;
                    Course course_to_add = Full_List_Courses.get_course(course_to_add_id);
                    Student_List_Courses.add_course(course_to_add);
                }

                else if (browse_in_command==2){
                    running_browse = false;
                }
                else{
                    cout << "Erroneous command. Please try again" << endl;
                }
            }
        }

        else if(in_command == 3){ //Logout
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
    return 0;
}
