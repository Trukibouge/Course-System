#include "list_student.h"

List_Student::List_Student(const string& filename_in){
    ifstream fic_in(filename_in);   
    string sid_in;
    string fn_in;
    string ln_in;
    string lid_in;
    string lpwd_in;
    fic_in >> sid_in >> fn_in >> ln_in >> lid_in >> lpwd_in;
    while(!fic_in.eof()){
        fic_in >> sid_in >> fn_in >> ln_in >> lid_in >> lpwd_in;
        Student P(sid_in, fn_in, ln_in, lid_in, lpwd_in);
        vector_student.push_back(P);
    }
}

void List_Student::display()const{
    int i = 0;
    for(Student S : vector_student){
        cout << "n°" << i << ": ";
        S.display();
        i++;
    }
}

string List_Student::get_username(int i)const{
    return(vector_student[i].get_username());
}

string List_Student::get_password(int i)const{
    return(vector_student[i].get_password());
}