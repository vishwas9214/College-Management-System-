#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

class Student {
private:
    std::string studentID;
    std::string name;
    std::string email;
    std::string phoneNumber;
    std::string departmentID;
    double gpa;
    std::vector<std::string> enrolledCourses;

public:
    // Constructor
    Student(const std::string& id, const std::string& name, 
            const std::string& email, const std::string& phone, 
            const std::string& deptID);

    // Getters
    std::string getStudentID() const;
    std::string getName() const;
    std::string getEmail() const;
    std::string getPhoneNumber() const;
    std::string getDepartmentID() const;
    double getGPA() const;
    std::vector<std::string> getEnrolledCourses() const;

    // Setters
    void setEmail(const std::string& email);
    void setPhoneNumber(const std::string& phone);
    void setGPA(double gpa);
    
    // Course Management
    void enrollCourse(const std::string& courseID);
    void dropCourse(const std::string& courseID);
    bool isEnrolledInCourse(const std::string& courseID) const;
    
    // Display Information
    void displayInfo() const;
};

#endif // STUDENT_H
