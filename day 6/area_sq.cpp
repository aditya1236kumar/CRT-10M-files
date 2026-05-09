#include <iostream>
#include <cmath>
using namespace std;

class Area {
public:
    // Rectangle
    int length, width;
    Area(){
        length = 0;
        width = 0;
    }

    Area(int length , int w)(
        this->length=length;
        width = w;
    )

    Area(int s){
        lenght = s;
        width = s;

    }

    void show(){
        cout<<"area : "<< Area << endl;
    }
};

int main() {
    Area a1;
    a1.show();
    Area a2(5,10);
    a2.show();
    Area a3(7);
    a3.show();
   
    return 0;
}