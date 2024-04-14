#pragma once
#include "Dean.h"
#include "Member.h"
#include "Student.h"
#include <iostream>
using namespace std;

/*
- Title: string
- Content: string
- isApproved: string
- Status: string
+ setTitle(petition_title: string)
+ setContent(petition_content: string)
- setStatus()
+ request()
+ getTitle(): string
+ getContent: string
- checkStatus()
+ display(dean: Dean, student: Student)
+ decide()
*/

class Petition {
private:
  string Title, Content, isApproved, status;
  void setStatus(bool seen);
  void checkSatus();

public:
  // Setters______________________________________________________________________
  void setTitle(string);
  void setContent(string);
  void request();
  // void display(Dean, Student);
  void decide(Member &check_member_role);

  // Getters______________________________________________________________________
  string getTitle();
  string getContent();

  // Friends.........................................
  friend class Member; // The friend relationship is made by youssef and it's to
                       // access the the role string and if it's a dean the
                       // petition status will be changed upon it.
};
