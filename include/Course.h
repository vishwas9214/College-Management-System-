#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>

class Course {
private:
    std::string courseID;
    std::string courseName;
    std::string description;
    int credits;
    int maxCapacity;
    std::string facultyID;
    std::vector<std::string> enrolledStudents;

public:
    // Constructor
    Course(const std::string& id, const std::string& name, 
           const std::string& desc, int credits, int capacity);

    // Getters
    std::string getCourseID() const;
    std::string getCourseName() const;
    std::string getDescription() const;
    int getCredits() const;
    int getMaxCapacity() const;
    int getCurrentEnrollment() const;
    std::string getFacultyID() const;
    std::vector<std::string> getEnrolledStudents() const;

    // Setters
    void setFacultyID(const std::string& fID);
    void setDescription(const std::string& desc);
    
    // Enrollment Management
    bool enrollStudent(const std::string& studentID);
    bool removeStudent(const std::string& studentID);
    bool isStudentEnrolled(const std::string& studentID) const;
    int getAvailableSeats() const;
    
    // Display Information
    void displayInfo() const;
};

#endif // COURSE_H
