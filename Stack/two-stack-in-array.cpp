#include <bits/stdc++.h>
using namespace std;

class twoStacks {
  int *arr;
  int size;
  int top1, top2;

public:
  twoStacks(int n = 100) {
    size = n;
    arr = new int[n];
    top1 = -1;
    top2 = size;
  }

  void push1(int x);
  void push2(int x);
  int pop1();
  int pop2();
};

/* The method push to push element into the stack 2 */
void twoStacks ::push1(int x) {
  if (top1 < top2 - 1) {
    top1++;
    arr[top1] = x;
  } else {
    return;
  }
}

/* The method push to push element into the stack 2*/
void twoStacks ::push2(int x) {
  if (top1 < top2 - 1) {
    top2--;
    arr[top2] = x;
  } else {
    return;
  }
}

/* The method pop to pop element from the stack 1 */
// Return the popped element
int twoStacks ::pop1() {
  if (top1 >= 0) {
    int x = arr[top1];
    top1--;
    return x;
  } else
    return -1;
}

/* The method pop to pop element from the stack 2 */
// Return the popped element
int twoStacks ::pop2() {
  if (top2 < size) {
    int x = arr[top2];
    top2++;
    return x;
  } else
    return -1;
}

int main(int argc, char const *argv[]) {
  twoStacks s = new twoStacks();
  s.push1(34);
  s.push1(43);
  cout << s.pop1();
  return 0;
}
