#include <iostream>
#include <string>
using namespace std;

class vehicle {
public:
    string name;
    string model;
    int tyre;
    vehicle(string _name, string _model, int _tyre) {
        this->name = _name;
        this->model = _model;
        this->tyre = _tyre;
    }

public:
    void engine_st() {
        cout << "Engine started " << name << " " << model << " " << endl;
    }
    void engine_stop() {
        cout << "Engine stopped " << name << " " << model << " " << endl;
    }
};
class car : public vehicle {
    int doors;
    string transmission;
public:
    car(string _name, string _model, int _tyre, int _doors, string _transmission) : vehicle(_name, _model, _tyre) {
        this->doors = _doors;
        this->transmission = _transmission;
    }
    void start_ac() {
        cout << "ac started " << name << " " << endl;
    }
};
int main() {
  car a("mercedes","s-class",4,4,"manual");
    a.engine_st();
    a.start_ac();
    a.engine_stop();
  return 0;
}