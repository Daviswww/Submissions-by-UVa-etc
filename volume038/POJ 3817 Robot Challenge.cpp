#include <cstdio>
#include <cmath>

const double INF = 1e20;
const int N = 1002;
int x[N], y[N], p[N];
double s[N];
int n;  // with (100, 100) included, there are n targets

inline double min(const double a, const double b) { return a < b ? a : b; }
void f()
{
    int i, j, dx, dy, cp;
    for(s[0] = 0, i = 1; i <= n; ++i)
        s[i] = INF;
    for(i = 1; i <= n; ++i) {
        for(cp = 0, j = i-1; j >= 0; --j) {
            dx = x[i] - x[j];
            dy = y[i] - y[j];
            s[i] = min(s[i], s[j] + sqrt(dx*dx+dy*dy+.0) + 1 + cp);
            cp += p[j];
        }
    }
    printf("%.3f\n", s[n]);
}

int main()
{
    scanf("%d", &n);
    x[0] = y[0] = p[0] = 0;
    while(n) {
        ++n;
        for(int i = 1; i < n; ++i) {
            scanf("%d%d%d", x+i, y+i, p+i);
        }
        x[n] = y[n] = 100; p[n] = 0;
        f();
        scanf("%d", &n);
    }
    return 0;
}
