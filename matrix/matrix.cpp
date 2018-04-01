#include "matrix.h"

using namespace matr;

Matrix::Matrix(const int& rows, const int& colums):
size_(rows, colums)
{}

Dimension Matrix::size() const{
  return size_;
}
