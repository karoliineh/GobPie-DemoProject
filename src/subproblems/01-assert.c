// just a few sanity checks on the __goblint_checks
#include <goblint.h>
#include "01-assert.h"

int asserts() {
  int success = 1;
  int silence = 1;
  int fail = 0;
  int unknown;
  __goblint_check(success);
  __goblint_check(fail); // FAIL!
  __goblint_check(unknown == 4); // UNKNOWN!
  return 0;
  __goblint_check(silence); // NOWARN!
}
