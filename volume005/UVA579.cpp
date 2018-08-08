#include <cstdio>
using namespace std;
double Abs(double a) { return a<0 ? -a : a; }
int main()
{
    int H,M;
    while (scanf("%d:%d",&H,&M) != EOF){
        if (!H && !M) break;
        double H_minute = (double(H) + double(M)/60) * 5; // 將時針換成分鐘表示
        double M_minute = double(M);
        double diff = Abs(H_minute - M_minute);
        while (diff >= 60) diff -= 60;
        if (diff > 30) diff = 60 - diff; 
        printf("%.3f\n", diff * 6); // 一分鐘6度
    }
    return 0;
}
