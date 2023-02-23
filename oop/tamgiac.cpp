#include <bits/stdc++.h> // Khai báo luôn các thư viện cho ngắn gọn.

using namespace std;

struct point
{
    int x, y;
};

struct triangle
{
    point p1, p2, p3;
};

// Nhập tọa độ điểm trong tam giác.
void input(triangle &t)
{
    cin >> t.p1.x >> t.p1.y;
    cin >> t.p2.x >> t.p2.y;
    cin >> t.p3.x >> t.p3.y;
}

// Tính khoảng cách giữa hai điểm trên mặt phẳng tọa độ.
double distance(point p1, point p2)
{
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) * 1.0 + (p1.y - p2.y) * (p1.y - p2.y) * 1.0);
}

// Kiểm tra xem ba điểm đã nhập vào có thỏa mãn là một tam giác hay không.
bool check_triangle(double d1, double d2, double d3)
{
    return (d1 > 0 && d2 > 0 && d3 > 0 && d1 + d2 > d3 && d1 + d3 > d2 && d2 + d3 > d1);
}

// Tính chu vi tam giác.
double calc_perimeter(double d1, double d2, double d3)
{
    return d1 + d2 + d3;
}

// Tính diện tích tam giác.
double calc_area(triangle t)
{
    return 0.5 * fabs((t.p2.x - t.p1.x) * (t.p3.y - t.p1.y) * 1.0 - (t.p3.x - t.p1.x) * (t.p2.y - t.p1.y) * 1.0);
}

int main()
{
    riangle t;
    input(t);

    if (!check_triangle(t))
        cout << "NO";
    else
        cout << "YES" << endl << fixed << setprecision(3) << calc_perimeter(t) << ' ' << calc_area(t);
}