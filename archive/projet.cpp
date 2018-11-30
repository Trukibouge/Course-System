<<<<<<< Updated upstream:archive/projet.cpp
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Student{
    private:
        string student_id;
        string first_name;
        string last_name;
        string login_id;
        string login_pwd;
        int nb_course;
    public:
        Student(const string& sid_in, const string& fn_in, const string& ln_in, const string& lid_in, const string& lpwd_in);
        void change_password(const string& new_pass);
        void display()const;
};

Student::Student(const string& sid_in, const string& fn_in, const string& ln_in, const string& lid_in, const string& lpwd_in)
    :student_id(sid_in), first_name(fn_in), last_name(ln_in), login_id(lid_in), login_pwd(lpwd_in), nb_course(0){};

void Student::change_password(const string& new_pass){
    login_pwd = new_pass;
}
void Student::display()const{
    cout << student_id << " " << first_name << " " << last_name << " " << login_id << " " << login_pwd << " " << nb_course << endl; 
}

class List_Student{
    private:
        //int length;
        vector<Student> vector_student;
    public:
        List_Student(const string& filename_in);
        void display()const;
};

List_Student::List_Student(const string& filename_in){
    ifstream fic_in(filename_in);   
    string sid_in;
    string fn_in;
    string ln_in;
    string lid_in;
    string lpwd_in;
    fic_in >> sid_in >> fn_in >> ln_in >> lid_in >> lpwd_in;
    while(!fic_in.eof()){
        fic_in >> sid_in >> fn_in >> ln_in >> lid_in >> lpwd_in;
        Student P(sid_in, fn_in, ln_in, lid_in, lpwd_in);
        vector_student.push_back(P);
    }
}

void List_Student::display()const{
    int i = 0;
    for(Student S : vector_student){
        cout << "n°" << i << ": ";
        S.display();
        i++;
    }
}

class Course{
    public:
	    Course(string id, const string& ti, const string& te, const string& loc)
            :course_id(id),title(ti),teacher(te),location(loc), nb_student(0){};
	    void display() const;
    private:
	    string course_id;
	    string title;
	    string teacher;
	    string location;
        int nb_student;
};

void Course :: display() const{
	cout << course_id << " " << title << ' ' << teacher << ' ' << ' ' << location << " " << nb_student << endl;
}

class List_Course{
    public:
	    List_Course(const string& filename_in);
	    void display() const;
    private:
	    vector<Course> Vect_Course;
};

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

int main(){
    List_Student ListS1("Account.txt");
    ListS1.display();
    List_Course ListC1("Course.txt");
    ListC1.display();
    return 0;
}

=======
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Student{
    private:
        string student_id;
        string first_name;
        string last_name;
        string login_id;
        string login_pwd;
        int nb_course;
    public:
        Student(const string& sid_in, const string& fn_in, const string& ln_in, const string& lid_in, const string& lpwd_in);
        void change_password(const string& new_pass);
        void display()const;
};

Student::Student(const string& sid_in, const string& fn_in, const string& ln_in, const string& lid_in, const string& lpwd_in)
    :student_id(sid_in), first_name(fn_in), last_name(ln_in), login_id(lid_in), login_pwd(lpwd_in), nb_course(0){};

void Student::change_password(const string& new_pass){
    login_pwd = new_pass;
}
void Student::display()const{
    cout << student_id << " " << first_name << " " << last_name << " " << login_id << " " << login_pwd << " " << nb_course << endl; 
}

class List_Student{
    private:
        //int length;
        vector<Student> vector_student;
    public:
        List_Student(const string& filename_in);
        void display()const;
};

List_Student::List_Student(const string& filename_in){
    ifstream fic_in(filename_in);   
    string sid_in;
    string fn_in;
    string ln_in;
    string lid_in;
    string lpwd_in;
    fic_in >> sid_in >> fn_in >> ln_in >> lid_in >> lpwd_in;
    while(!fic_in.eof()){
        fic_in >> sid_in >> fn_in >> ln_in >> lid_in >> lpwd_in;
        Student P(sid_in, fn_in, ln_in, lid_in, lpwd_in);
        vector_student.push_back(P);
    }
}

void List_Student::display()const{
    int i = 0;
    for(Student S : vector_student){
        cout << "n°" << i << ": ";
        S.display();
        i++;
    }
}

class Course{
    public:
	    Course(string id, const string& ti, const string& te, const string& loc)
            :course_id(id),title(ti),teacher(te),location(loc), nb_student(0){};
	    void display() const;
    private:
	    string course_id;
	    string title;
	    string teacher;
	    string location;
        int nb_student;
};

void Course :: display() const{
	cout << course_id << " " << title << ' ' << teacher << ' ' << ' ' << location << " " << nb_student << endl;
}

class List_Course{
    public:
	    List_Course(const string& filename_in);
	    void display() const;
    private:
	    vector<Course> Vect_Course;
};

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

int main(){
    List_Student ListS1("Account.txt");
    ListS1.display();
    //List_Course ListC1("Course.txt");
    //ListC1.display();
    return 0;
}

>>>>>>> Stashed changes:projet.cpp
