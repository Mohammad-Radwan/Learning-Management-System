#include "Petition.h"
#include "Member.h"
#include <iostream>
#include <string>
using namespace std;

// Constructor

// Setter Methods

void Petition::setDean(Dean &dean){

  dean_ptr = &dean;
}

void Petition::setDepartment(Department &department)
{
  department_ptr = &department;
}
void Petition::setStatus(bool seen) {
  seen = true;
}

bool Petition::checkSatus(bool seen ) {
  return seen;
}

void Petition::setTitle(string Titl) {
  int len_title = Titl.length(); // Titl.length; => Titl.length();
  int iterator{0};
  int numofspaces{0};
  if (len_title == 0) {
    cout << "Please Enter Title Correctly !!";
  }
  for (; iterator < len_title; iterator++) {
    if (Titl[iterator] == ' ') {
      numofspaces += 1;
    }
  }
  if (numofspaces < 2) {
    cout << "Please Enter 3 words at least for the Title !!";
  }

  else {
    Title = Titl;
  }
}

void Petition::setContent(string Conten) {
  int len_content = Conten.length();
  int iterator{0};
  int numofspaces{0};
  if (len_content == 0) {
    cout << "Please Enter Content Correctly !!";
  }
  for (; iterator < len_content; iterator++) {
    if (Conten[iterator] == ' ') {
      numofspaces += 1;
    }
  }
  if (numofspaces < 9) {
    cout << "Please Enter 10 words at least for the Content don't describe it "
            "briefly !!";
  }

  else {
    Content = Conten;
  }
}


// Getter Methods
string Petition::getTitle() { return Title; }
string Petition::getContent() { return Content; }
Dean *Petition::getDean() { return dean_ptr; }
Student *Petition::getStudent() { return student_ptr; }
Department *Petition::getDepartment() { return department_ptr; }
/* Content Sample Petition
This petition is for discussing the various changes in the syllabus of various
courses without any declaration for the students
*/
