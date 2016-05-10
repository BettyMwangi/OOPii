#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class University {
  Student *stud;
  std::string name;
  public:
  University(std::string name, Student *stud)
    : name(name), stud(stud) {}
  University(Student *stud = NULL)
    : University("Strathmore University", stud) {}
  std::string getAllStudents();/*!TODO Write a method ////getAllStudents() that prints the Name of the University and all the students at the university*/
  std::string getName(); /*TODO Write a method that yields the name of the
   university */
};
#endif