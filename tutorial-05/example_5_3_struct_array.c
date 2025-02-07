/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 05
************************************************************************************/


#include <stdio.h>

struct point {
    float x;
    float y;
    float z;
};

void print_point_array(struct point *point_array, int length) {
    for (int i=0; i<length; i++) {
        printf("\nPoint a [x, y, z]: [%f, %f, %f]", point_array[i].x, point_array[i].y, point_array[i].z);
    }
}

int main() {
    struct point point_1 = {12.0, 8.5, 0.2};
    struct point point_2 = {12.1, 7.5, 0.4};
    struct point point_3 = {12.2, 6.5, 0.6};
    struct point point_4 = {12.3, 5.5, 0.8};

    struct point all_points_1[10];  // Don't initialize all elements to 0
    struct point all_points_2[10] = {};  // Initialize all elements to 0
    struct point all_points_3[10] = {point_1, point_2, point_3, point_4};

    print_point_array(all_points_1, 10);

    printf("\n\n");

    print_point_array(all_points_2, 10);

    printf("\n\n");

    print_point_array(all_points_3, 10);

    return 0;
}
