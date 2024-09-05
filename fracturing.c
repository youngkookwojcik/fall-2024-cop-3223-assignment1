// Young Kook Wojcik
// Professor Juan Parra
// Assignment 1
// September 6th, 2024


#include <stdio.h>
#include <math.h>



//******************************************************************************
// double calculateDistance()
//
// Purpose:         Takes in 2 points, calculates distance
// Output:          Displays message presenting the calculated distance
//******************************************************************************
double calculateDistance()
{

        // Requesting input for Point #1
        printf("Enter values for Point #1:\n");
        double x1;
        double y1;
        scanf("%lf\n%lf", &x1, &y1);

        // Requesting input for Point #2
        printf("Enter values for Point #2:\n");
        double x2;
        double y2;
        scanf("%lf\n%lf", &x2, &y2);

        // Printing values entered for Points #1 and #2
        printf("Point #1 entered: X1 = %.1lf; Y1 = %.1lf\n", x1, y1);
        printf("Point #2 entered: X2 = %.1lf; Y2 = %.1lf\n", x2, y2);

        // Calculating the distance between Points #1 and #2
        double distance = (y2-y1)/(x2-x1);

        printf("The distance between the two points is %g\n", distance);

return distance;
}





//************************************************************************************
// double calculatePerimeter()
//
// Purpose:         Takes in 2 points, calculates distance, then perimeter
// Output:          Displays message presenting the calculated distance and perimeter
//************************************************************************************
double calculatePerimeter()
{
        // Declaring and defining the diameter by calling the calculateDistance() function
        double diameter = calculateDistance();

        // Calculating the perimeter using pi
        double perimeter = diameter * 3.14;

        printf("The perimeter of the city encompassed by your request is %g.\n", perimeter);

return 2.0;
}





//************************************************************************************
// double calculateArea()
//
// Purpose:         Takes in 2 points, calculates distance, then area
// Output:          Displays message presenting the calculated distance and area
//************************************************************************************
double calculateArea()
{
        // Declaring and defining the distance by calling the calculateDistance() function
        double distance = calculateDistance();

        // Declaring and defining the radius
        double radius = distance/2;

        // Declaring and defining the radius squared
        double radius_squared = pow(radius,2);

        //Declaring, defining, and calculating the area
        double area = 3.14 * radius_squared;

        printf("The area of the city encompassed by your request is %g\n", area);

return 2.1;
}





//************************************************************************************
// double calculateWidth()
//
// Purpose:         Takes in 2 points, calculates distance, then width is derived
// Output:          Displays message presenting the calculated distance and width
//************************************************************************************
double calculateWidth()
{
        // Declaring and defining the width by calling the calculateDistance() function
        double width = calculateDistance();

        printf("The width of the city encompassed by your request is %g\n", width);

return 1.0;
}





//************************************************************************************
// double calculateHeight()
//
// Purpose:         Takes in 2 points, calculates distance, then derives height
// Output:          Displays message presenting the calculated distance and height
//************************************************************************************
double calculateHeight()
{
        // Declaring and defining the height by calling the calculateDistance() function
        double height = calculateDistance();

        printf("The height of the city encompassed by your request is %g\n", height);

return 1.0;
}







//********************************************************************************************************
// int main(int argc, char **argv)
//
// Purpose:         Calls functions to calculate distance, perimeter, area, width, and height for 2 points
// Output:          Displays message presenting the calculated distance and perimeter
//********************************************************************************************************
int main(int argc, char **argv)
{
        // Calling the distance calculator function and saving it to a variable
        double distance = calculateDistance();

        // Calling the perimeter calculator function and saving it to a variable
        double perimeter = calculatePerimeter();

        // Calling the area calculator function and saving it to a variable
        double area = calculateArea();

        // Calling the width calculator function and saving it to a variable
        double width = calculateWidth();

        // Calling the height calculator function and saving it to a variable
        double height = calculateHeight();

return 0;
}