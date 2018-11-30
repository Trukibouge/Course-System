course.o: course.h
	g++ -c course.cpp

list_course.o: course.h list_course.h
	g++ -c list_course.cpp

student.o: student.h
	g++ -c student.cpp

list_student.o: student.h list_student.h
	g++ -c list_student.cpp

planning.o: planning.h 
	g++ -c planning.cpp 

course_system.o: list_student.h list_course.h
	g++ -c course_system.cpp

course_system: course.o list_course.o student.o list_student.o planning.o course_system.o 
	g++ course.o list_course.o student.o list_student.o planning.o course_system.o -o course_system

clean: 
	del /f *.o