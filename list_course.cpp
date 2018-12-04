#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "list_course.h"
using namespace std;

List_Course::List_Course(const string& filename_in){
    ifstream fic(filename_in);
    string Course_Id;
    string Title;
    string Teacher;
    string Location;
    fic >> Course_Id >> Title >> Teacher >> Location;
	while (!fic.eof()){
            fic >> Course_Id >> Title >> Teacher >> Location;
			Course c(Course_Id, Title, Teacher, Location);
			Vect_Course.push_back(c);
		}
}

void List_Course::display() const{
	for (Course C : Vect_Course)
		C.display();
}

void List_Course::display_available_courses()const{
    for (Course C : Vect_Course){
        if(C.get_nb_student()<20)
            C.display();
    }
}

void List_Course::add_course(Course& c) {
    if(get_n_courses() < 4)
    {
        Vect_Course.push_back(c);
        n_courses ++;
        cout << "Course added"<< endl;
    }    
    else   
        cout << "Please remove a course before adding one" << endl;
}

void List_Course::remove_course(Course& c) {
    if(n_courses != 0)
    {
        for(vector<Course>::iterator i = Vect_Course.begin(); i <Vect_Course.end(); i++)
        {
            if (i->get_id() == c.get_id()) 
            {
                Vect_Course.erase(i);
                n_courses--;
                cout <<"Course erased"<< endl;
            }
        }
    }

    else
        cout << "No course to remove" << endl;
}

Course List_Course :: get_course(string& course_to_find_id){
    int count = 0;
    for(vector<Course>::iterator i = Vect_Course.begin(); i <Vect_Course.end(); i++){
        if(i->get_id() == course_to_find_id){
            return(Vect_Course[count]);
        }
        else
            count++;
    }
    cout << "Course not found." << endl;
}