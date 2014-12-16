#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <iostream>

#define baseA 3
#define baseB 5
#define baseC 0

/*
2.	A sequence is defined by the following recurrence relation:
tn = 7t[n-1] - 4t[n-2] -9t[n-3]
and the base case:
t[1] = 0, t[2] = 5, t[3] = 3
Write a function to determine t[n] given n.
*/

//number of calls may be off
int calculate (int n, int a, int b, int c){
    //printf ("%i, %i, %i, %i\n", n, a, b, c);
    if (n == 1) {
        return (7*a - 4 * b - 9 * c);
    } else {
        return calculate (n-1, (7*a - 4 * b - 9 * c), a, b) ;
    }
}


int main (){
    int n = 0;
    scanf ("%i", &n);
    printf ("%i",calculate (n, baseA, baseB, baseC));
}
