#include "list_student.h"
#include "list_course.h"

int main(){
    List_Student ListS1("Account.txt");
    ListS1.display();
    List_Course ListC1("Course.txt");
    ListC1.display();
    return 0;
}
