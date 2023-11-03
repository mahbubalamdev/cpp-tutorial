#include <iostream>
#include <math.h>
using namespace std;
struct Point {
    int x;
    int y;
};
class Line {
    public:
        Point start;
        Point end;
        double get_length(){
            double length=9;
            // length = calculate_line_length(start, end);
            return length;
        }
};

enum DayOfWeek {
    Sunday=5,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main(){
    Point p;
    p.x = 5;
    p.y = 10;
    cout << "x = " << p.x << ", y = " << p.y << endl;
    Line l;
    l.start = p;
    l.end = p;
    cout << "length = " << l.get_length() << endl;

    DayOfWeek day = Monday;
    cout << "day = " << day << endl;
    return 0;
}
