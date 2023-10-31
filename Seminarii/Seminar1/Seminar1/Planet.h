#pragma once
// if a header is included in another header  and we include in c both  headers then it will give an error 
// we must use #pragma once in order  to have only one 
typedef struct
{
    char name[50];
    char type[50];
    double distance_from_earth;
 }Planet;

Planet create_planet(char name[], char type[], double distance);
double get_distance(Planet p);
char* get_name(Planet p);