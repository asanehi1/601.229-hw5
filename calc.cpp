#include <cstdlib>
#include <cstring>
#include <iostream>
#include <map>
#include "calc.h"


struct Calc {
private:
  //fields
  std::map<std::string, int> variables;
  
public:
    // public member functions
  Calc() {}
  ~Calc() {variables.clear();}

  int evalExpr(const std::string &expr, int &result) {
    return 0;
  }

private:
    // private member functions
};




extern "C" struct Calc *calc_create(void) {
    return new Calc();
}

extern "C" void calc_destroy(struct Calc *calc) {
    delete calc;
}

extern "C" int calc_eval(struct Calc *calc, const char *expr, int *result) {
    return calc->evalExpr(expr, *result);
}
