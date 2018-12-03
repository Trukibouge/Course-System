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
        int get_n_planning()const{return n_planning;};
        void display()const;
        void display_planning_i(int i)const;
        void add_planning_to_list(Planning planning_in);
        void remove_planning_from_list(const string& student_id);
    private:
        int n_planning;
	    vector<Planning> Vect_Planning;
};