#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

// Course class
class Course
{
    // Private data members
private:
    long int crn;
    string name;
    int creditHours;
    int year;
    string semester;

public:
    // 3 constructors that accept different arguments and initializes the data
    // members.
    Course() : crn(0), name(""), creditHours(0), year(0), semester(""){};
    Course(long int c, string n) : crn(c), name(n), creditHours(0), year(0), semester(" "){};
    Course(long int c, string n, int ch, int y, string s) : crn(c), name(n), creditHours(ch), year(y), semester(s){};

    // Accessor to get crn
    long int getCRN() const
    {
        return crn;
    }

    // Mutator to set crn
    void setCRN(long int courseCRN)
    {
        crn = courseCRN;
    }

    // Accessor to get name
    const string &getName() const
    {
        return name;
    }

    // Mutator to set name
    void setName(const string &courseName)
    {
        name = courseName;
    }

    // Accessor to get credit hours
    int getCreditHours() const
    {
        return creditHours;
    }

    // Mutator to set credit hours
    void setCreditHours(int courseCreditHours)
    {
        creditHours = courseCreditHours;
    }

    // Accessor to get year
    int getYear() const
    {
        return year;
    }

    // Mutator to set year
    void setYear(int courseYear)
    {
        year = courseYear;
    }

    // Accessor to get semester
    const string &getSemester() const
    {
        return semester;
    }

    // Mutator to set semester
    void setSemester(const string &courseSemester)
    {
        semester = courseSemester;
    }

    // Function that stores the string as a stream called sout, which is
    // returned. The various accessor/getter functions are called to incorporate
    // the data members into the stream.
    string str() const
    {
        stringstream sout;

        sout << setw(20) << getCRN() << setw(20) << getName() << setw(20) << getCreditHours() << setw(20) << getYear() << setw(20) << getSemester() << endl;

        return sout.str();
    }

    // Destructor for the Course constructors
    ~Course(){};
};

// Main function
int main()
{
    // 3 objects are created for each constructor using pointers. The arguments
    // for the constructors are passed through as needed.
    Course *c1 = new Course;
    Course *c2 = new Course(101, "C++ Programming");
    Course *c3 = new Course(102, "Java Programming", 3, 2019, "Summer");

    // Setter/mutator functions are called for each member that is 0 or has an
    // empty string. Various values are passed through the setter functions.
    // For c1, setter functions are called for all data elements since they are
    // all 0 or empty strings. For c2, only the data members without values are
    // set using the setter functions. For c3, no setter functions are called
    // since all data elements already have values.
    c1->setCRN(100);
    c1->setName("C# Programming");
    c1->setCreditHours(4);
    c1->setYear(2018);
    c1->setSemester("Fall");

    c2->setCreditHours(4);
    c2->setYear(2018);
    c2->setSemester("Spring");

    // Prints out the table heading and calls the str function to print out each
    // data element based on the object.
    cout << setw(20) << "Course #" << setw(20) << "Course Title" << setw(20) << "Credit Hours" << setw(20) << "Year" << setw(20) << "Semester" << endl;
    cout << c1->str();
    cout << c2->str();
    cout << c3->str();

    // Deletes each object that's been saved in the heap.
    delete c1;
    delete c2;
    delete c3;

    return 0;
}