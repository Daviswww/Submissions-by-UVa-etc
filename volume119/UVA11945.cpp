#include<iostream>
#include <cstdio>
int main(void) {
  int n, ans[100], a1, cnt, cases;
  scanf("%d", &n);
  while (n--) {
    double avg = 0.0, tmp, a2;
    for (int i = 0; i < 12; avg = avg + tmp, ++i)
      scanf("%lf", &tmp);
    avg = avg / 12;
    a1 = (int)avg;
    a2 = avg - a1 + 0.005;
    for (cnt = 0; a1; a1 = a1 / 1000)
      ans[cnt++] = a1 % 1000;
    printf("%d $%d", ++cases, ans[cnt - 1]);
    for (int i = cnt - 2; i >= 0; --i)
      printf(",%03d", ans[i]);
    printf(".%02d\n", (int)(a2 * 100));
  }
  return 0;
}
