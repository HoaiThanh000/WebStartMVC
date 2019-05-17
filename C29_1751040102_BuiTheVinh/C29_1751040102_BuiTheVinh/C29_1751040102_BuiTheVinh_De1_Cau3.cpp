#include<iostream>
#include<cmath>
using namespace std;

class Point
{
private:
	int x, y;
public:
	int get_x(){
		return x;
	}
	int get_y(){
		return y;
	}
	Point(){ int x = 0, y = 0; }
	~Point(){}
	void set(int a, int b)
	{
		x = a, y = b;
	}
	double khoang_cach(Point p1, Point p2)
	{
		return sqrt( (((p1.get_x() - p2.get_x())) * (((p1.get_x() - p2.get_x())) + ((p1.get_y() - p2.get_y()) * (p1.get_y() - p2.get_y() ))));
	}
}
void nhap(Point &p)
{
	int x, y;
	cout << "Nhap vao toa do cua x va y: ";
	cin >> x >> y;
	p.set(x, y);
	
}

int main()
{
	int x1, x2, y1, y2;
	Point p1, p2, kq;
	nhap(p1);
	nhap(p2);
	cout << "Khoang cach cua 2 toa do la: " << kq.khoang_cach(p1, p2);
	
	return 0;
}