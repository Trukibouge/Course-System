#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "course.h"
using namespace std;


class List_Course{
    public:
	    List_Course(const string& filename_in);
	    void display() const;
		void add_course(Course c);
		void remove_course(Course c);
    private:
	    vector<Course> Vect_Course;
};
