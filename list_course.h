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
    private:
	    vector<Course> Vect_Course;
};
