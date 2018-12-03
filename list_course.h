#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "course.h"
using namespace std;

#pragma once 

class List_Course{
    public:
	    List_Course(const string& filename_in);
		List_Course() {n_courses = 0;}
	    void display() const;
		void display_available_courses()const;
		void add_course(Course& c);
		void remove_course(Course& c);
		int get_n_courses()const{return n_courses;}
    private:
		int n_courses;
	    vector<Course> Vect_Course;
};
