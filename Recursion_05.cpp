#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*
5.	Write a function to count the number of multiples of m between a and b in an array of integers A.
Where b >=a, and a, b, and m are all whole numbers.
NOTE that the multiples are between the whole numbers a and b … a and b are not indices in the array.
*/


int findMults (int a, int b, int m, int A [80]){//using A+1 to pass string, considered passing address cheating on recursion
    if (A[0] == 0){
        return 0;
    }
//Why is using multiple ifs is better
    if ((A[0] % m == 0) && A[0] >= a && A[0] <= b){
        return (1+findMults(a, b, m, A+1 ));
    }
        return (findMults(a, b, m, A+1));
}

int main (){
    /*
    char str [80] = {"dogfood"};
    for (int i = 0; str[i] != 0; i++){
        printf ("%i\n", *str+i);
    }
    *///can use str+1 to pass an array more efficiently! (without using pointer to array)
    //is this better or worse in terms of recursion?
    int lo = 0;
    int hi = 0;
    int mult = 0;
    int arr [80] = {1,2,3,4,5,6,7,8,9,0};

printf ("Input Minimum");
    scanf ("%i", &lo);
    printf ("Input Maximum");
    scanf ("%i", &hi);
    printf ("Input multiple");
    scanf ("%i", &mult);

    printf ("Number of mults:\t%i\n", findMults(lo, hi, mult, arr));
}
