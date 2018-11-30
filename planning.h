#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "course.h"
#include "list_course.h"
#include "list_student.h"
using namespace std;

#pragma once 

class Planning
{
    public:
        Planning(int id);
        void display() const;
        void add_course();
    private:
        List_Course list_course;
        string student_id;
};