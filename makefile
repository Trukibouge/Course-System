course.o: course.h course.cpp
	g++ -c course.cpp

list_course.o: course.h list_course.h list_course.cpp
	g++ -c list_course.cpp

student.o: student.h student.cpp
	g++ -c student.cpp

list_student.o: student.h list_student.h list_student.cpp
	g++ -c list_student.cpp

course_system.o: list_student.h list_course.h course_system.cpp
	g++ -c course_system.cpp

course_system: course.o list_course.o student.o list_student.o course_system.o
	g++ -o course.o list_course.o student.o list_student.o course_system.o