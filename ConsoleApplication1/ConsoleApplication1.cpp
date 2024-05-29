#include <iostream>
using namespace std;

int main()
{
    float sum = 0;
    float point_1 = 0;
    float point_2 = 0;

    for (float x = 0; x < 1.02; x += 0.003) {   
        cout << x << endl;
        point_1 = 1 / cos(x);
        point_2 = 3 - pow(x, 2);
        sum += point_2 - point_1;
    }

    cout << sum << endl;
}
