#include <iostream>
#include "Mylib.hpp"
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;


int main() {
    cout << "Hello world" << endl;
    Mylib mylib;
    cout << mylib.func() << endl;

    Vector3d v1(1.0, 2.0, 3.0);
    Vector3d v2(1.0, 2.0, 3.0);
    cout << v1 + v2 << ", " << v1 - v2 << ", " << endl;

    cout << v1.norm() << endl;
    cout << v1.dot(v2) << endl;
    cout << v1.cross(v2) << endl;
    cout << v1.array() * v2.array() << endl;

    
}