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