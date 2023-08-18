#include <stdio.h>

// Function prototypes
float circleArea(float radius);
float circlePeri(float radius);
float recArea(float radius, float height, float perimiter);

int main() {
    float radius;
    float height;
    float perimeter; // Store the circle's perimeter
    float Area;     // Store the total area of the cylinder

    // Input from user
    printf("Enter the radius of the Cylinder : ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder : ");
    scanf("%f", &height);

    // Calculate circle's perimeter
    perimeter = circlePeri(radius);

    // Calculate total area of the cylinder
    Area = circleArea(radius) + recArea(radius, height, perimeter);

    // Display the result
    printf("The total surface area of the cylinder is %.2f\n", Area);
    return 0;
}

// Function to calculate the perimeter of a circle
float circlePeri(float radius) {
    return 2 * 3.14159265359 * radius;
}

// Function to calculate the area of a circle
float circleArea(float radius) {
    return 3.14159265359 * radius * radius;
}

// Function to calculate the area of a rectangle
float recArea(float radius, float height, float perimiter) {
    return perimiter * height;
}
