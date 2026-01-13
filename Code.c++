#include <iostream>
#include <cmath>
#include <functional>
#include <vector>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;


using Func = function<double(double)>;


struct TestFunction {
   string name;
   Func f;
   Func f1_exact;
   Func f2_exact;
};
