#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "student.h"
using namespace std;

class List_Student{
    private:
        vector<Student> vector_student;
    public:
        List_Student(const string& filename_in);
        void display()const;
        string get_username(int i)const;
        string get_password(int i)const;
};