#include "../lib/lib.h"
#include "FuzzArgsProfile.pb.h"
#include "autofuzz.h"
#include "libprotobuf-mutator/src/libfuzzer/libfuzzer_macro.h"
#include <algorithm>
extern "C" {
e1 autofuzz4;
enum _e1 autofuzz5;
int *autofuzz6;
unsigned autofuzz6size;
int autofuzz8;
}
DEFINE_PROTO_FUZZER(const FuzzArgsProfile &autofuzz_mutation) {
  e1 fuzzvar4;
  fuzzvar4 = autofuzz_mutation.fuzzvar4();
  autofuzz4 = fuzzvar4;
  enum _e1 fuzzvar5;
  fuzzvar5 = autofuzz_mutation.fuzzvar5();
  autofuzz5 = fuzzvar5;
  int fuzzvar6[50 + 1] = {};
  autofuzz6size = 50 <= autofuzz_mutation.fuzzvar6().size()
                      ? 50
                      : autofuzz_mutation.fuzzvar6().size();
  std::copy(autofuzz_mutation.fuzzvar6(),
            autofuzz_mutation.fuzzvar6() + autofuzz6size, fuzzvar6);
  autofuzz6 = fuzzvar6;
  int fuzzvar8;
  fuzzvar8 = autofuzz_mutation.fuzzvar8();
  autofuzz8 = fuzzvar8;
  enterAutofuzz();
}