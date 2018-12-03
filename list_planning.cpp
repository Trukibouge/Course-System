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
    for(vector<Planning>::iterator i = Vect_Planning.begin(); i < Vect_Planning.end(); i++)
        {
            if(i->get_student_id() == student_id)
                return index;
            else 
                index++;
        }
}

void List_Planning :: display()const
{
    for (Planning P : Vect_Planning)
        P.display();
}

void List_Planning :: display_planning_i(int i)const{
    Vect_Planning[i].display();
}

void List_Planning :: add_planning_to_list(Planning planning_in){
    Vect_Planning.push_back(planning_in);
    n_planning++;
}

void List_Planning :: remove_planning_from_list(const string& student_id){
    int index = 0;
    int index_of_planning_to_remove = get_planning_index(student_id);
    if(n_planning != 0){
        for(vector<Planning>::iterator i = Vect_Planning.begin(); i < Vect_Planning.end(); i++){
            if (index == index_of_planning_to_remove){
                Vect_Planning.erase(i);
                n_planning--;
            }
        }
    }
}