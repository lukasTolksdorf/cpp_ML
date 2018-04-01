#ifndef DIMENSION_H_
#define DIMENSION_H_


namespace matr{

class Dimension{
public:
  Dimension(const int& rows,const int& columns);
  Dimension() = delete; // do not allow for this constructor to be called
  int getRows() const;
  int getColumns() const;
  void resize(const int& rows, const int& columns);
  bool operator==(const Dimension& rhs) const;
private:
  int rows_;
  int columns_;
};
}
#endif
