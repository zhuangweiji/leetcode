#include <cassert>
#include <cmath>
#include <ctime>
#include <iostream>

//#include "MyUtil.h"
#include "../../Chapter2Complexity/MyUtil.h"

using namespace std;

//泛型函数
template <typename T>
int binarySearch(T arr[], int n, T target) {
  int l = 0, r = n - 1;  // 在[l..r]的范围内寻找target
  while (l <= r) {  // 当 l == r时，区间[l..r]仍是有效的 :维护循环不变量
    // int mid = (l+r)/2;
    int mid = l + (r - l) / 2;  // 防止整型溢出
    if (arr[mid] == target)
      return mid;
    else if (arr[mid] < target) {
      l = mid + 1;  // target在[mid+1...r]中
    } else {
      assert(arr[mid] > target);
      r = mid - 1;  // target在[l...mid-1]中
    }
  }

  return -1;
}

int main() {
  int n = 10000000;
  int* data = MyUtil::generateOrderedArray(n);

  clock_t startTime = clock();
  for (int i = 0; i < n; i++) {
    assert(i == binarySearch(data, n, i));
  }
  clock_t endTime = clock();

  cout << "BinarySearch test complete." << endl;
  cout << "Time cost: " << double(endTime - startTime) / CLOCKS_PER_SEC << " s"
       << endl;

  return 0;
}