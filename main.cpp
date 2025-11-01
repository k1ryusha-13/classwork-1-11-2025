#include <iostream>

void destroy(int ** mtx, size_t created)
{
  
}
int ** create(size_t rows, size_t cols)
{
  int ** mtx = new int * [rows];
  size_t created = 0;
  try
  {    
    for (; created < rows, ++created)
    {
      mtx[created] = new int[cols];
    }
  }
  catch (const std::bad_alloc & e)
  {

  }
  return mtx;
}

int main()
{
  int ** matrix = nullptr;
  matrix = create(5,5);
}
