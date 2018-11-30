#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "course.h"
#include "list_course.h"
#include "list_student.h"
#include "planning.h"
#include "list_planning.h"
using namespace std;

int List_Planning :: get_planning_index(const string& student_id)
{
    int index = 0;
    for(vector<Planning>::iterator i = Vect_Planning.begin(); i <Vect_Planning.end(); i++)
        {
            if(i->get_student_id() == student_id)
                return index;
            else 
                index++;
        }
}

void List_Planning :: display()
{
    for (Planning P : Vect_Planning)
        P.display();
}
