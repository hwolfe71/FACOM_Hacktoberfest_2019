/*
 * geometry.c
 * A program that displays various geometric formulas for a given number.
 *
 * Herb Wolfe, Jr
 * github: hwolfe71
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float circleArea(int radius);
float circleCircumference(int radius);
float isocolesArea(int side);
int isocolesPerimeter(int side);
int squareArea(int side);
int squarePerimeter(int side);
int cubeVolume(int radius);
int cubeArea(int radius);
float sphereVolume(int radius);
float sphereSurface(int radius);

int main(int argc, char *argv[]) {
	int num;

	if (argc > 1) {
		num = atoi(argv[1]);
	} else {
		printf("Enter a number: ");
		scanf("%d", &num);
	}

	printf("\nThe area of a circle of radius %d is: %f\n" ,
			num, circleArea(num));
	printf("The circumference of a circle of radius %d is: %f\n" ,
			num, circleCircumference(num));
	printf("The area of a isocoles triangle with side %d is: %f\n" ,
			num, isocolesArea(num));
	printf("The perimeter of a isocoles triangle with side %d is: %d\n" ,
			num, isocolesPerimeter(num));
	printf("The area of a square with side %d is: %d\n" ,
			num, squareArea(num));
	printf("The perimeter of a sqaure with side %d is: %d\n" ,
			num, squarePerimeter(num));
	printf("The volume of a cube with side %d is: %d\n" ,
			num, cubeVolume(num));
	printf("The surface area of a cube with side %d is: %d\n" ,
			num, cubeArea(num));
	printf("The volume of a sphere of radius %d is: %f\n" ,
			num, sphereVolume(num));
	printf("The surface area of a sphere of radius %d is: %f\n" ,
			num, sphereSurface(num));
}

// Area is pi * r * r
float circleArea(int radius) {
	return(M_PI * radius * radius);
}

// Circumference is 2 * pi * r
float circleCircumference(int radius) {
	return(2 * M_PI * radius);
}

// Area of a triangle is 1/2 base * height
// height of an isocoles triangle is sqrt(3) *  base
float isocolesArea(int side) {
	return(0.5 * side * sqrt(3) * side);
}

// Perimeter of an isocoles triangle is 3 * base
int isocolesPerimeter(int side) {
	return(3 * side);
}

// Area of a square is side * side
int squareArea(int side) {
	return(side * side);
}

// Perimeter of a square is 4 * side
int squarePerimeter(int side) {
	return(side + side + side + side);
}

// Volume of a cube is side * side * side
int cubeVolume(int side) {
	return(side * side * side);
}

// Surface area is 6 * side * side (6 * area of a side)
int cubeArea(int side) {
	return(6 * side * side);
}

// Volume of a sphere is 4/3 * pi * radius ^ 3
float sphereVolume(int radius) {
	return(4.0 / 3.0 * M_PI * radius * radius * radius);
}

// Surface area of a sphere is 4 * pi * radius * radius
float sphereSurface(int radius) {
	return(4 * M_PI * radius * radius);
}

