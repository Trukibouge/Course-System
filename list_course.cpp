#include "list_course.h"

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
