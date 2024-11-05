// sum.cpp

#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h" // підключили зовнішні оголошення змінних

using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
    n = 0;
    a = x;
    S = a;

    do {
        n++;
        dod(); // виклик процедури обчислення доданку
        S += a;
    } while (fabs(a) > eps);
}
