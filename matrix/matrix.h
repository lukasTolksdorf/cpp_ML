#ifndef MATRIX_H_
#define MATRIX_H_

#include <iostream>
#include "dimension.h"

namespace matr{

class Matrix{
public:
  Matrix(const int& rows, const int& colums);
  Dimension size() const;
private:
  Dimension size_;
};

}

#endif
