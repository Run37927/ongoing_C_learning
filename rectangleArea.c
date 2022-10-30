#include <stdio.h>

// write a function that accepts rectangle structure r as an argument and computes the area of r
struct point {
    int x;
    int y;
};

struct rectangle {
    struct point upperLeft;
    struct point lowerRight;
};

int calculateArea(struct rectangle r) {
    int length, width;
    length = r.lowerRight.x - r.upperLeft.x;
    width = r.upperLeft.y - r.lowerRight.y;
    return length * width;
}


int main()
{
    // create a rectangle
    struct rectangle bob;
    printf("enter the upper left coordinates of the rectangle: \n");
    scanf("%d %d", &bob.upperLeft.x, &bob.upperLeft.y);

    printf("enter the lower right coordinates of the rectangle: \n");
    scanf("%d %d", &bob.lowerRight.x, &bob.lowerRight.y);

    printf("Your rectangle's area is %d\n", calculateArea(bob));
}