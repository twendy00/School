// CS1410 - Assignment 02
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//TODO 1: ShapeKind Enumeration goes here
// Defining scoped enumeration with shapes called ShapeKind
enum class ShapeKind
{
    CIRCLE,
    SQUARE,
    RECTANGLE
};

//TODO 2: Shape Structure goes here
// Defining structure shape with double length & width and ShapeKind kind
struct Shape
{
    ShapeKind kind;
    double length;
    double width;
};

double PI = 3.14159;

// Function prototypes
// Prototype for function area
double area(Shape);

//TODO 3: area() definition goes here
// Defining function area. If shape is a circle, will calculate the area of a
// circle (pi * radius^2). Otherwise, the area will be calculated as length *
// width. Area variable is returned.
double area(Shape s)
{
    double area;

    if (s.kind == ShapeKind::CIRCLE)
    {
        area = PI * (s.length / 2) * (s.width / 2);
    }
    else
    {
        area = s.length * s.width;
    }

    return area;
}

// Prototype for function perimeter
double perimeter(Shape);

//TODO 4: perimeter() definition goes here
// Defining function perimeter. If shape is a circle, will calculate the
// perimeter of a circle (pi * diameter). Otherwise, the perimeter will be
// calculated as 2*length + 2*width. Perimeter variable is returned.
double perimeter(Shape s)
{
    double perimeter;

    if (s.kind == ShapeKind::CIRCLE)
    {
        perimeter = PI * s.length;
    }
    else
    {
        perimeter = (2 * s.length) + (2 * s.width);
    }

    return perimeter;
}

// Prototype for function nameof
string nameOf(Shape);

//TODO 5: nameOf() definition goes here
// Defining function nameof. If the kind variable is a circle, square, or
// rectangle, then the switch statement will return a string of circle, square,
// or rectangle and store it in the variable name. Name variable is returned.
string nameOf(Shape s)
{
    string name;

    switch (s.kind)
    {
    case ShapeKind::CIRCLE:
        name = "Circle";
        break;
    case ShapeKind::SQUARE:
        name = "Square";
        break;
    case ShapeKind::RECTANGLE:
        name = "Rectangle";
        break;
    default:
        return "";
    }
    return name;
}

// Prototype for function promptAndReadInputFor
void promptAndReadInputFor(Shape &);

//TODO 6: promptAndReadInputFor() definition goes here
void promptAndReadInputFor(Shape &shape)
{
    // If kind variable is a circle, then user is prompted to enter in the
    // diameter of a circle, which is stored as length. Length and width
    // will each be treated as the diameter. Since they are both the diameter,
    // width is assigned the same value as length
    if (shape.kind == ShapeKind::CIRCLE)
    {
        cout << "Enter the diameter of a circle: " << endl;
        cin >> shape.length;
        shape.width = shape.length;
    }
    // If kind variable is a square, then user is prompted to enter in the
    // length of a square, which is stored as length. The length and width
    // are the same on a square, so width is assigned the same value as length
    if (shape.kind == ShapeKind::SQUARE)
    {
        cout << "Enter the length of a square: " << endl;
        cin >> shape.length;
        shape.width = shape.length;
    }
    // If kind variable is a rectangle, then user is prompted to enter in the
    // length of a rectangle, which is stored as length. Since the length and
    // width of a rectangle are not always the same, the user is prompted to
    // enter in the width, which is stored as width. If the length and width are
    // the same, the shape is changed to a square
    if (shape.kind == ShapeKind::RECTANGLE)
    {
        cout << "Enter the length and width of a rectangle: " << endl;
        cin >> shape.length >> shape.width;
        if (shape.length == shape.width)
        {
            shape.kind = ShapeKind::SQUARE;
        };
    }
}

// The main function
int main()
{
    // Shape objects
    Shape circle = {ShapeKind::CIRCLE, 0, 0};

    //TODO 7: define two more shape objects: a square and and a rectangle
    Shape square = {ShapeKind::SQUARE, 0, 0};
    Shape rectangle = {ShapeKind::RECTANGLE, 0, 0};

    //TODO 8: Call the promptAndReadInputFor() function on each of the above three shapes
    promptAndReadInputFor(circle);
    promptAndReadInputFor(square);
    promptAndReadInputFor(rectangle);

    //TODO 9: Print a out a report of these shapes in a table-like format

    // Headings for the table
    cout << setw(10) << "SHAPE" << setw(10) << "WIDTH" << setw(10) << "HEIGHT" << setw(16) << "PERIMETER" << setw(10) << "AREA" << endl;
    // Calls nameof, perimeter, and area functions to obtain the respective values based on the object that is passed through
    // The width and length values are pulled in based on the object
    cout << setw(10) << nameOf(circle) << setw(10) << circle.width << setw(10) << circle.length << setw(13) << perimeter(circle) << setw(13) << area(circle) << endl;
    cout << setw(10) << nameOf(square) << setw(10) << square.width << setw(10) << square.length << setw(13) << perimeter(square) << setw(13) << area(square) << endl;
    cout << setw(10) << nameOf(rectangle) << setw(10) << rectangle.width << setw(10) << rectangle.length << setw(13) << perimeter(rectangle) << setw(13) << area(rectangle) << endl;

    return 0;
}
