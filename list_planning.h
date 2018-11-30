#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "course.h"
#include "list_course.h"
#include "list_student.h"
#include "planning.h"
using namespace std;

class List_Planning
{
    public: 
        int get_planning_index(const string& student_id);
        void display();
    private:
        int n_planning;
	    vector<Planning> Vect_Planning;
};