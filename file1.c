#include <stdio.h>
#include <stdint.h>
int main()
{
int8_t a = 0x1a;
int8_t b = 0x2;
printf("0x%x + 0x%x = 0x%x\n", a, b, (a+b));
printf("0x%x - 0x%x = 0x%x\n", a, b, (a-b));
printf("0x%x * 0x%x = 0x%x\n", a, b, (a*b));
printf("0x%x / 0x%x = 0x%x\n", a, b, (a/b));
printf("0x%x %% 0x%x = 0x%x\n", a, b, (a%b));
return 0;
}