#include <stdio.h>
#include <assert.h>

#include "subproblems/01-assert.h"
#include "subproblems/01-simple_rc.h"
#include "subproblems/02-branch.h"
#include "subproblems/03-loops.h"
#include "subproblems/10-nullpointer-dereference-simple.h"

int main() {

  int a = asserts();
  assert(a < 1);

  int s = simple_rc();
  assert(s == 0);

  int b = branch();
  assert(b == 0);

  int l = loops();
  assert(l == 0);

  int n = nullpointer();
  assert(n == 1);

  return 0;
}