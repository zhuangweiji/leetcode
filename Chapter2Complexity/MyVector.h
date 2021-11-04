#ifndef TIME_COMPLEXITY_EXPERIMENTS_MYVECTOR_H
#define TIME_COMPLEXITY_EXPERIMENTS_MYVECTOR_H

#include <cassert>
#include <iostream>


#define DEFAULT_CAPACITY 10

using namespace std;

template <typename T>
class MyVector {
 private:
  T* _elem;
  int _capacity;  // 存储数组中可以容纳的最大的元素个数
  int _size;      // 存储数组中的元素个数

  void resize(int newCapacity) {
    assert(newCapacity >= _size);
    T* newData = new T[newCapacity];
    for (int i = 0; i < _size; i++)  // O(n)
      newData[i] = _elem[i];
    delete[] _elem;

    _elem = newData;
    _capacity = newCapacity;
  }

 public:
  MyVector(int c = DEFAULT_CAPACITY) {
    _elem = new T[_capacity = c];
    _size = 0;
  }

  ~MyVector() { delete[] _elem; }

  void push_back(T e) {
    // assert( _size < _capacity );
    if (_size == _capacity)
      resize(2 * _capacity);  // 均摊复杂度分析 Average:O(1)

    _elem[_size++] = e;
  }

  T pop_back() {
    assert(_size > 0);
    T ret = _elem[_size - 1];
    _size--;
    if (_size == _capacity / 4)  // 防止复杂度的震荡 Average:O(1)
      resize(_capacity / 2);

    return ret;
  }
};

#endif