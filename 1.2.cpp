#include <iostream>
using namespace std;
#define PI 3.14

int main()
{
    int r, h;
    cout << "请输入圆锥底的半径和锥高:" << endl;
    cin >> r >> h;
    double v = PI * r * r * h / 3;
    cout << "圆锥的体积为：" << v << endl;
    return 0;
    
}