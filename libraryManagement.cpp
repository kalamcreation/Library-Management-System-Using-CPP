#include <bits/stdc++.h>
using namespace std;

// Encapsulation: Student class with private attributes and public methods
class Student {
private:
    string name;
    int rollNumber;

public:
    Student(const string& studentName, int studentRoll) : name(studentName), rollNumber(studentRoll) {}

    string getName() const {
        return name;
    }

    int getRollNumber() const {
        return rollNumber;
    }
};

// Inheritance: Base class for Courses
class Course {
protected:
    string courseName;

public:
    Course(const string& name) : courseName(name) {}

    virtual void displayCourseInfo() {
        cout << "Course: " << courseName << endl;
    }
};

// Inheritance: Derived class for Programming Course
class ProgrammingCourse : public Course {
public:
    ProgrammingCourse(const string& name) : Course(name) {}

    // Polymorphism: Override base class function
    void displayCourseInfo() override {
        cout << "Programming Course: " << courseName << endl;
    }
};

// Polymorphism: Function Overloading
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

// Abstraction: Abstract base class for Interfaces
class Interface {
public:
    // Pure Virtual Function
    virtual void show() = 0;
};

// Abstraction: Derived class implementing Interface
class Implementation : public Interface {
public:
    void show() override {
        cout << "Implementation of Interface" << endl;
    }
};

int main() {
    // Classes and Objects
    Student student("Alice", 101);
    cout << "Student Name: " << student.getName() << endl;
    cout << "Roll Number: " << student.getRollNumber() << endl;

    // Encapsulation: Accessing private attributes via getter methods

    // Inheritance: Base and Derived classes
    Course course("Mathematics");
    ProgrammingCourse programmingCourse("C++ Programming");

    course.displayCourseInfo();
    programmingCourse.displayCourseInfo();

    // Polymorphism: Function Overloading
    cout << "Add int: " << add(5, 3) << endl;
    cout << "Add double: " << add(3.5, 2.7) << endl;

    // Abstraction: Using Interface
    Implementation implementation;
    implementation.show();

    return 0;
}
