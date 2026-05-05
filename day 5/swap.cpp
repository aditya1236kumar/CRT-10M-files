#include <iostream>
using namespace std;

void swapNUM(int* x, int* y){
    int z;
    z=*x;
    *x=*y;
    *y=z;
}

int main(){
    int x, y;
    cin >> x >> y;
    swapNUM(&x,&y);
    cout<<x<<" "<<y <<endl;
    return 0;
}