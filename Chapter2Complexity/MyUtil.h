#ifndef TIME_COMPLEXITY_EXPERIMENTS_MYUTIL_H
#define TIME_COMPLEXITY_EXPERIMENTS_MYUTIL_H

#include <cassert>
#include <ctime>
#include <iostream>
#include <random>

using namespace std;

namespace MyUtil {

int *generateRandomArray(int n, int rangeL, int rangeR) {
  assert(n > 0 && rangeL <= rangeR);

  int *arr = new int[n];

  srand(time(NULL));
  // cout << rand() << "\t" << endl;
  for (int i = 0; i < n; i++) arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
  return arr;
}

int *generateOrderedArray(int n) {
  assert(n > 0);

  int *arr = new int[n];

  for (int i = 0; i < n; i++) arr[i] = i;
  return arr;
}

}  // namespace MyUtil

#endif