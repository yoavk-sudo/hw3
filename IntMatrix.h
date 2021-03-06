//
// Created by Ron Dahan on 18/06/2020.
//

#ifndef HW3_INTMATRIX_H
#define HW3_INTMATRIX_H

#include "Auxiliaries.h"

namespace mtm {
    class IntMatrix {
        int** row;
        int dim_row;
        int dim_col;
    public:
        explicit IntMatrix(const Dimensions& dimensions, int value = 0);
        ~IntMatrix();
        IntMatrix& operator=(const IntMatrix& matrix);
        int height() const;
        int width() const;
        int size() const;
        IntMatrix transpose() const ;
        friend IntMatrix operator+(const IntMatrix& matrix1, const IntMatrix& matrix2);
        IntMatrix operator-() const ;
    };
}
#endif //HW3_INTMATRIX_H
