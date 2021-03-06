
// Swap All Odd And Even Bits
// Question
// 1. You are given a number n.
// 2. You have to swap all odd position bits with even position bits.
// 3. Every odd position bit is swapped with adjacent bit on left side.
// 4. Every even position bit is swapped with adjacent bit on right side.
// 5. Print the number formed after swapping.

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {

  int n;
  cin>>n;
  int om = 0xAAAAAAAA;
  int em = 0x55555555;
  int evenm = n & em;
  int oddm = n & om;
  evenm <<= 1;
  oddm >>= 1;
  cout<<( evenm | oddm);
  return 0;
}
