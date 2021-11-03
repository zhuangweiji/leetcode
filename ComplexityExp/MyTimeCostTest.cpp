#include <cmath>
#include <ctime>
#include "MyAlgorithmTester.h"
#include "MyUtil.h"

using namespace std;

int main() {

  // 数据规模倍乘测试findMax
  // O(n)
  for( int i = 1; i <= 26; i++){

    int n = pow(2, i);
    int *arr = MyUtil::generateRandomArray(n, 0, 32767);
    int max = 0;

    clock_t startTime = clock();
    max = MyAlgorithmTester::findMax(arr, n);
    clock_t endTime = clock();

    cout << "Data size 2^" << i << " = " << n << "\t";
    cout << "Max = " << max << "\t";
    cout << "Time cost: " << double(endTime - startTime)/CLOCKS_PER_SEC << endl;

    delete[] arr;
  }
}