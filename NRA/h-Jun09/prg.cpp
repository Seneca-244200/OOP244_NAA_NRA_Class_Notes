#include <iostream>
#include "Bucket.h"
using namespace std;
using namespace seneca;

void BucketAttributes(const Bucket& B) {
   cout << "value: " << B[0] << endl;
   cout << "capacity: " << B[1] << endl;
}

int main() {
   cout << "OOP244 NRA - Jun 05" << endl;
   Bucket E;
   Bucket F{ 30, 120 };
   Bucket B(10);
   double dvar{};
   B.operator~() << endl;
   ~B << endl;
   B.operator=(10.2);
   E = B = 10.2;
   dvar = B += 20.1;
   dvar = B.operator+=(20.1);
   E = F + 20.30;
   E = ++F;
   E = F++;
   dvar = E;
   dvar = double(B);
   dvar = (double)F;
   cout << "value: " << B[0] << endl;
   cout << "capacity: " << B[1] << endl;
   cout << "Garbage!: " << B[24] << endl;
   B[0] = 20;
   B[1] = 50;
   return 0;
}