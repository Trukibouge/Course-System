#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "student.h"
using namespace std;

#pragma once

class Course{
    public:
	    Course(string id, const string& ti, const string& te, const string& loc)
            :course_id(id),title(ti),teacher(te),location(loc), nb_student(0){};
	    void display() const;
		string get_id() const { return course_id;}
    private:
	    string course_id;
	    string title;
	    string teacher;
	    string location;
        int nb_student;
};