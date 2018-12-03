#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "course.h"
#include "list_course.h"
#include "list_student.h"
#include "planning.h"
using namespace std;

Planning ::  Planning(int id)
{
    student_id = id;
}

void Planning :: display() const
{
    cout << "id :" << student_id;
    list_course.display();
}

void Planning :: add_course(Course& course_to_add){
    list_course.add_course(course_to_add);
}

void Planning :: remove_course(Course& course_to_remove){
    list_course.remove_course(course_to_remove);
}