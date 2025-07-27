#include <iostream>
#include "Mylib.hpp"
#include <Eigen/Dense>
#include <memory>
using namespace std;
using namespace Eigen;

class Element {
public:
    Element() = default;
    virtual ~Element() = default;

    double E_;
    double nu_;

};
class Square1st : public Element {
public:

};

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

    const int nx = 10;
    const int ny = 10;
    //const int nz = 1;

    vector< Vector3d > rs_node;
    size_t ix2i[nx+1][ny+1] = {};
    for (size_t ix = 0; ix <= nx; ++ix) {
        for (size_t iy = 0; iy <= ny; ++iy) {
            const double x = ix * 0.1;
            const double y = iy * 0.1;
            const double z = 0.0;
            Vector3d r(x, y, z);
            rs_node.push_back(r);
            ix2i[ix][iy] = rs_node.size() - 1;
        }
    }
     
    vector<unique_ptr<Element>> pElems;
    vector<vector<size_t>> elem_nodeIds;
    for (size_t ix = 0; ix < nx; ++ix) {
        for (size_t iy = 0; iy < ny; ++iy) {
            unique_ptr<Element> pElem = make_unique<Square1st>();
            pElem->E_ = 1.0;
            pElem->nu_ = 0.5;
            pElems.push_back(std::move(pElem));
            vector<size_t> nodes = {
                ix2i[ix][iy],
                ix2i[ix+1][iy],
                ix2i[ix+1][iy+1],
                ix2i[ix][iy+1]
            };
            elem_nodeIds.push_back(nodes);
        }
    }





}