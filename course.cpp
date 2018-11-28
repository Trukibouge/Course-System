#include "course.h"

void Course :: display() const{
	cout << course_id << " " << title << ' ' << teacher << ' ' << ' ' << location << " " << nb_student << endl;
}
