#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>
#include <vector>

class Department {
private:
    std::string departmentID;
    std::string departmentName;
    std::string headFacultyID;
    std::vector<std::string> facultyMembers;
    std::vector<std::string> courses;

public:
    // Constructor
    Department(const std::string& id, const std::string& name);

    // Getters
    std::string getDepartmentID() const;
    std::string getDepartmentName() const;
    std::string getHeadFacultyID() const;
    std::vector<std::string> getFacultyMembers() const;
    std::vector<std::string> getCourses() const;

    // Setters
    void setHeadFacultyID(const std::string& headID);

    // Faculty Management
    void addFaculty(const std::string& facultyID);
    void removeFaculty(const std::string& facultyID);
    bool hasFaculty(const std::string& facultyID) const;
    int getFacultyCount() const;

    // Course Management
    void addCourse(const std::string& courseID);
    void removeCourse(const std::string& courseID);
    bool hasCourse(const std::string& courseID) const;
    int getCourseCount() const;

    // Display Information
    void displayInfo() const;
};

#endif // DEPARTMENT_H
