#include <stdio.h>

int main()
{
// hack the box
     int num, a, b, c, d, e, f;
     printf("num : ");
     scanf("%d", &num);
     a = ((num % 10) + 1) % 10;
     num = num / 10;
     b = ((num % 10) + 1) % 10;
     num = num / 10;
     c = ((num % 10) + 1) % 10;
     num = num / 10;
     d = ((num % 10) + 1) % 10;
     num = num / 10;
     e = ((num % 10) + 1) % 10;
     num = num / 10;
     f = e * 10000 + d * 1000 + c * 100 + b * 10 + a * 1;
     printf("%d", f);
     return 0;
}