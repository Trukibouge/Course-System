#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#pragma once

class Student{
    private:
        string student_id;
        string first_name;
        string last_name;
        string login_id;
        string login_pwd;
        int nb_course;
    public:
        Student(const string& sid_in, const string& fn_in, const string& ln_in, const string& lid_in, const string& lpwd_in);
        void change_password(const string& new_pass);
        void display()const;
        string get_id()const;
        string get_username()const;
        string get_password()const;
};
