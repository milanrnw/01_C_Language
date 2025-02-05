/*
Write a Program to create a Student Record System for 3 students using structure.
Consider the below-mentioned attributes in the Student structure:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_city
- stu_standard
- stu_school
*/

#include <stdio.h>

typedef struct user user_data;

struct user 
{
   int stu_id;
   char *stu_name;
   int stu_age;
   char *stu_course;
   char *stu_city;
   int stu_standard;
   char *stu_school;
};

void info(user_data first)
{
    printf("id : %d\n",first.stu_id);
    printf("name : %s\n",first.stu_name);
    printf("age : %d\n",first.stu_age);
    printf("course : %s\n",first.stu_course);
    printf("city : %s\n",first.stu_city);
    printf("standard : %d\n",first.stu_standard);
    printf("school : %s\n",first.stu_school);
    
    printf("\n");
    
};

int main() {
    
       user_data one;
       one.stu_id = 1;
       one.stu_name = "john";
       one.stu_age = 18;
       one.stu_course = "web dev";
       one.stu_city = "baroda";
       one.stu_standard = 12;
       one.stu_school = "gems";
       
       user_data two;
       two.stu_id = 2;
       two.stu_name = "jimmy";
       two.stu_age = 17;
       two.stu_course = "python";
       two.stu_city = "surat";
       two.stu_standard = 12;
       two.stu_school = "all star achiever";
       
       user_data three;
       three.stu_id = 3;
       three.stu_name = "Mayur";
       three.stu_age = 15;
       three.stu_course = "Django";
       three.stu_city = "ahmedabad";
       three.stu_standard = 10;
       three.stu_school = "moonroe";
       
    
    info(one);
    info(two);
    info(three);
    
}