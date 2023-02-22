#include <iostream>
#include "matrix.h"

using namespace std;

//default constructor
COP3330::Matrix_Class()
{
    rowsize=0;
    colsize=0;
    matrix = new int*[rowsize];
    for(int i = 0; i < rowsize; i++)
        matrix[i] = new int[colsize];
}

//parameterized constructor
COP3330::Matrix_Class(const int r, const int c=6)
{
    rowsize = r;
    colsize = c;
    if(r<2 || r>6 || c<2 || c>6){
        matrix = new int*[6];
        for(int i = 0; i < 6; i++)
            matrix[i] = new int[6];
    }
    else{
        matrix = new int*[r];
        for(int i = 0; i < r; i++)
            matrix[i] = new int[c];
    }
}

//destructor
COP3330::~Matrix_Class()
{
    Clear();
}

//function that will clear the matrix
void COP3330::Clear()
{
    //
    delete matrix;
}

//function that assigns all zeros to the matrix
void COP3330::Zero()
{
    for (int r = 0; r < r; r++){
        for (int c = 0; c < colsize; c++){
            matrix[r][c] = 0;
        }
    }
}

//function that prints the matrix(es)
void COP3330::Print(string msg)const
{
    cout<<"\n Matrix Output "<<msg<<"\n";
    cout<<"\n Row size = "<<rowsize<<" Column size = "<<colsize<<"\n";

    //
}

//function that takes input in for matrix
void COP3330::Input()
{
    for (int r = 0; r < r; r++){
        //cout<<"\n Enter "<<colsize<<" numbers for Row "<<rows+1<<" : ";
        for (int c = 0; c < colsize; c++){
            cin>>matrix[r][c];
        }
    }
}

void COP3330::Resize(const int r, const int c)
{
    if(r<2 || r>6 || c<2 || c>6){
        //this->rowsize = rowsize;
        //this->colsize = colsize;
    }
    else{
        rowsize = r;
        colsize = c;
    }
}

// Inline function to return rowsize
int COP3330::Getrowsize()
{
    return rowsize;
}

// Inline function to return colsize
int COP3330::Getcolsize()
{
    return colsize;
}

//overloaded assignment operator
COP3330::Matrix_Class & operator = (const Matrix_Class & m)
{
    Matrix_Class mtrx;
    mtrx.rowsize = m.rowsize
    mtrx.colsize = m.colsize


}

//overloaded mult. operator that multiplies 2 matrixes
COP3330::Matrix_Class & operator * (Matrix_Class & m1)
{
    Matrix_Class mtrx;

}