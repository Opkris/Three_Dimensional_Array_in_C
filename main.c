#include <stdio.h>

/*
 Initializing Three-Dimensional Array is the same as Two-dimensional arrays,
 The difference is the number of dimensions increases so the number of nested
 braces will also increase.

 https://www.geeksforgeeks.org/multidimensional-arrays-c-cpp/

 */

int iMultiDimArray [3][4][5] ={
        {
        {1,   2,  3, 4,   5},
        {6,   7,  8, 9,  10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
        },{
        {21, 22, 23, 24, 25},
        {26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35},
        {36, 37, 38, 39, 40}
        },{
        {41, 42, 43, 44, 45},
        {46, 47, 48, 49, 50},
        {51, 52, 53, 54, 55},
        {56, 57, 58, 59, 60}
        }
};

int showMyThreeDimArray();

/*
 Accessing elements in Three-Dimensional Arrays is also similar to the Two-Dimensional array.
 The difference is we have to use three loops instead of two loops for additional dimension in
 the Three-Dimensional arrays.
 */


int main() {

    showMyThreeDimArray();
}

int showMyThreeDimArray() {
    int iArray;
    int iRow;
    int iColumn;
    
    int iArrayLen = sizeof(iMultiDimArray) / sizeof(iMultiDimArray[0]);
    int iRowLen = sizeof(iMultiDimArray[0]) / sizeof(iMultiDimArray[0][0]);
    int iColumnLen = sizeof(iMultiDimArray[0][0]) / sizeof(iMultiDimArray[0][0][0]);

    printf("\n The size of the Three-dimensional Array is: %d %d %d", iArrayLen, iRowLen, iColumnLen);

    for (iArray = 0; iArray < iArrayLen; ++iArray) {
        printf("\n--- Array %d ---\n", iArray + 1);

        for (iRow = 0; iRow < iRowLen; ++iRow) {
            printf("\n\t--- Row %d ---\n", iRow + 1);

            for (iColumn = 0; iColumn < iColumnLen; ++iColumn) {
                printf("\tColumn:[%d] = %d\n", iColumn, iMultiDimArray[iArray][iRow][iColumn]);
            }
        }
    }
    return 0;
}