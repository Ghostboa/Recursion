// 6.	An array contains positive integers but the last element is negative.
// Write a function to compute the sum of the multiples of m in the array.

/*
This is a block comment.
Use these.
*/
int computeSum (int intArray [80], int m) {
    if (intArray[0] < 0)
        return 0;
    if (intArray[0] % m == 0)
        return (intArray[0] + computeSum (intArray + 1, m));
    if (intArray[0] % m != 0)
        return (computeSum (intArray +1, m));
}

int main (){
    int intArray [80] = {0,1,2,3,4,5,6,7,8,9,-1};

    int m = 2;
    printf ("%i",computeSum(intArray,m));
}
