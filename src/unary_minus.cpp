#include <long_arithmetic.h>

const BigNumber operator- (const BigNumber &a) {
    BigNumber result = a;
    result.is_negative = !result.is_negative;
    return result;
}