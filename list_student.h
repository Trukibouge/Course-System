#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "student.h"
using namespace std;

#pragma once

class List_Student{
    private:
        vector<Student> vector_student;
    public:
        List_Student(const string& filename_in);
        void display()const;
};