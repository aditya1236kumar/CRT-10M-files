#include <iostream>
using namespace std;

class Area {
private:
    int length;
    int width;
public:
    Area(int l, int w) {
        length = l;
        width = w;
    }
    friend int calculateArea(Area a);

    void showArea() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int calculateArea(Area a) {
    return a.length * a.width;
}

int main() {
    int l, w;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;

    Area a(l, w);
    a.showArea();

    cout << "Area is: " << calculateArea(a) << endl;
    return 0;
}