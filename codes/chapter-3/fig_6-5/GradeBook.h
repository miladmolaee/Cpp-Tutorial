// Fig. 6.3: GradeBook.h
// Definition of class GradeBook that finds the maximum of three grades.
// Member functions are defined in GradeBook.cpp
#include <string> // program uses C++ standard string class
// GradeBook class definition
class GradeBook
{
public:
    explicit GradeBook( std::string ); // initializes course name
    void setCourseName( std::string ); // set the course name
    std::string getCourseName() const; //retrieve the course name
    void displayMessage() const; // display a welcome message
    void inputGrades(); // input three grades from user
    void displayGradeReport() const; // display report based on the grades
    int maximum( int, int, int ) const; // determine max of 3 values
private:
    std::string courseName; // course name for this GradeBook
    int maximumGrade; // maximum of three grades
}; // end class GradeBook