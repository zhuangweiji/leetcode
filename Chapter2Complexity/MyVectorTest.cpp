#include <cmath>
#include <ctime>

#include "MyVector.h"


using namespace std;

int main() {
  // 数据规模倍乘测试
  for (int i = 10; i <= 26; i++) {
    int n = pow(2, i);

    clock_t startTime = clock();
    MyVector<int> vec;
    for (int i = 0; i < n; i++) {  // O(n)
      vec.push_back(i);
    }
    for (int i = 0; i < n; i++) {  // O(n)
      vec.pop_back();
    }
    clock_t endTime = clock();

    cout << "2 * " << n << " = " << 2 * n << "\toperations: \t";
    cout << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
  }

  return 0;
}