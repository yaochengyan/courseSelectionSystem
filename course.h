// Interface of Course class module
// Written by Wei Gong (open-src@qq.com) 2024-12-09

#pragma once
#include <string>
#include <vector>

class Student;

class Course
{
public:
    Course(std::string name, std::string id);
    bool isValid(std::string CourseId, Student *sp);
    void roster();

private:
    std::string m_name;
    std::string m_id;
    short m_credit;
    static short maxEnrollments;

    std::vector<Student *> _students;
};
