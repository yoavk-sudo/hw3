#include <iostream>
#include "IntMatrix.h"

using namespace mtm;

IntMatrix::IntMatrix(const Dimensions& dimensions, int value)
{
    dim_row = dimensions.getRow();
    dim_col = dimensions.getCol();
    //allocating rows
    row = new int *[dim_row];
    //allocating cols
    for (int i = 0; i < dim_row; ++i)
    {
        row[i] = new int[dim_col];
    }
    //setting default value
    for (int j = 0; j < dim_row; ++j)
    {
        for (int i = 0; i < dim_col; ++i)
        {
            row[j][i] = value;
        }
    }
}

IntMatrix::~IntMatrix()
{
    for (int i = 0; i < dim_row; ++i)
    {
        delete[] row[i];
    }
    delete[] row;
}

IntMatrix& IntMatrix::operator=(const IntMatrix& matrix)
{
    if(this == & matrix)
    {
        return *this;
    }
    for (int i = 0; i < dim_row; ++i)
    {
        delete[] row[i];
    }
    delete[] row;
    return *this;
}

int IntMatrix::width() const {
    return dim_col;
}

int IntMatrix::height() const {
    return dim_row;
}

int IntMatrix::size() const {
    return dim_row*dim_col;
}