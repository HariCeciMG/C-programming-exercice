#include<stdio.h>

float areaTriangle(float base, float height) {
    return 0.5 * base * height;
}

float areaRectangle(float length, float width) {
    return length * width;
}

float areaCircle(float radius) {
    const float PI = 3.14159;
    return PI * radius * radius;
}

void displayAreas(float triangleArea, float rectangleArea, float circleArea) {
    printf("Area of Triangle: %.2f\n", triangleArea);
    printf("Area of Rectangle: %.2f\n", rectangleArea);
    printf("Area of Circle: %.2f\n", circleArea);
}

void main(){
    float base, height, length, width, radius;
    
    // Input for triangle
    printf("Enter base and height of the triangle: ");
    scanf("%f %f", &base, &height);
    float triangleArea = areaTriangle(base, height);
    
    // Input for rectangle
    printf("Enter length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    float rectangleArea = areaRectangle(length, width);
    
    // Input for circle
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    float circleArea = areaCircle(radius);
    
    // Display areas
    displayAreas(triangleArea, rectangleArea, circleArea);
}