#include <iostream>
#include "matrix.cpp"
#include "matrix.h"

using namespace std;

using namespace COP3330;

int main() {

    int r;
    int c;
    //welcome message
    cout<<"Welcome to the Matrix Multiplication Program!"<<endl;

    cout<<"Please input the first matrix: ";    //must be all ints (pos or neg)

    cout<<"Please enter in the number of rows: ";
    cin>>r;
    cout<<"Please enter in the number of columns: ";
    cin>>c;

    //declaring all matrices
    Matrix_Class matrix;
    Matrix_Class matrix1(r,c);        // rowxcolumn matrix
    Matrix_Class matrix2(3,3);        // 3x3 matrix
    Matrix_Class matrix3(4,3);        // 4x3 matrix
    Matrix_Class matrix4(5,2);        // 5x2 matrix
    Matrix_Class matrixdupe;

// ********************************************
// * Take Input % Test print of matrix.       *
// ********************************************
    matrix1.Input();
    matrix1.Print("First Matrix");
    matrix2.Input();
    matrix2.Print("Second Matrix");

    matrix1.Print("Matrix1 after input");
    matrix2.Print("Matrix2 after input");

    matrix3.Input();
    matrix3.Print("Third Matrix");
    matrix4.Input();
    matrix4.Print("Fourth Matrix");

    //resize matrix? multiply matrices with diff sizes?

    matrix1.Print("Resize Matrix");

// *********************************************
// * Test multiplication and assignment operator*
// *********************************************
    matrixdupe = matrix3 * matrix4;
    matrixdupe.Print("Duplicate Multiplication");
    cout << "End" <<endl;
    return 0;
}

/*int main() {
    Matrix_Class MyMatrix1(4,4);        // 4x4 matrix
    Matrix_Class MyMatrix2(4,4);        // 4x4 matrix
    Matrix_Class MyMatrix3(2,3);        // 2x3 matrix
    Matrix_Class MyMatrix4(3,3);        // 3x3 matrix
    Matrix_Class DuplicateMatrix;
    MyMatrix1.Input();
    MyMatrix2.Input();
// ********************************************
// * Test print of matrix.                    *
// ********************************************
    MyMatrix1.Print("Matrix1 after input");
    MyMatrix2.Print("Matrix2 after input");

    MyMatrix3.Input();
    MyMatrix4.Input();

// *********************************************
// * Test multipication and assignment operator*
// *********************************************
    DuplicateMatrix = MyMatrix3 * MyMatrix4;
    DuplicateMatrix.Print("Duplicate Multiplication");
    std::cout << "I am done Neo! !" << std::endl;
    return 0;
}
*/