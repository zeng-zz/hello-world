//实现代码判断2个float变量相等
//误差精确到时小数点后5位
#include <stdio.h>
#include <math.h>
#define EPSILON 0.00001
int main()
{
    float m = 1.78;
    float x = 1.779999, y = 2;
    float z = m / y, z1 = x / y;
    if (fabs(z-z1)<EPSILON) {
        z = (m + x) / y;
    }
    printf("Z is %f\n", z);
    printf("Z1 is %f\n", z1);
    return 0;
}
