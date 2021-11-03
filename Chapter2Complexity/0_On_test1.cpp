#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>

using namespace std;

// 时间复杂度为O(n)的算法的时间代价和n成正比
int main(){

  for (int x = 0; x <= 9; x++){

    int n = pow(10, x);

    clock_t startTime = clock();

    int sum = 0;
    for(int i = 0; i < n; i++){
      sum += i;
    }
    clock_t endTime = clock();

    cout << "10^" << x << ": " << fixed << setprecision(8)
         << double(endTime - startTime)/ CLOCKS_PER_SEC
         << " s" << endl;
  }
  return 0;
}