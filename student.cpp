#include "student.h"

Student::Student(const string& sid_in, const string& fn_in, const string& ln_in, const string& lid_in, const string& lpwd_in)
    :student_id(sid_in), first_name(fn_in), last_name(ln_in), login_id(lid_in), login_pwd(lpwd_in), nb_course(0){};

void Student::change_password(const string& new_pass){
    login_pwd = new_pass;
}
void Student::display()const{
    cout << student_id << " " << first_name << " " << last_name << " " << login_id << " " << login_pwd << " " << nb_course << endl; 
}