#include "dimension.h"

using namespace matr;

Dimension::Dimension(const int& rows,const int& columns):
rows_(rows),
columns_(columns)
{}

void Dimension::resize(const int& rows, const int& columns)
{
  rows_ = rows;
  columns_ = columns;
  return;
}

int Dimension::getRows() const{
  return rows_;
}

int Dimension::getColumns() const{
  return columns_;
}

bool Dimension::operator==(const Dimension& rhs) const{
  if (rows_ != rhs.getRows())
    return false;
  if (columns_ != rhs.getColumns())
    return false;

  return true;
}
