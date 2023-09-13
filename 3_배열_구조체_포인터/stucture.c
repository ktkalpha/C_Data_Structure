#include <math.h>
#include <stdio.h>

typedef struct studentTag {
    char name[10];
    int age;
    double gpa;
} student;

typedef struct Point {
    double x;
    double y;
} point;

double get_distance(point p1, point p2);

int main() {
    student a = {"kim", 20, 4.3};
    student b = {"park", 21, 4.2};
    point p1 = {1, 2};
    point p2 = {9, 8};
    printf("%f", get_distance(p1, p2));
}

double get_distance(point p1, point p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}