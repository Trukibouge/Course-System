#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "student.h"
using namespace std;

class List_Student{
    private:
        //int length;
        vector<Student> vector_student;
    public:
        List_Student(const string& filename_in);
        void display()const;
};