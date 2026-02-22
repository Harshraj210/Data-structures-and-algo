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
class motorcycle : public vehicle {
    string handlebar;
    string suspension;

public:
    motorcycle(string _name, string _model, int _tyre, string _handlebar, string _suspension)
        : vehicle(_name, _model, _tyre) {
        this->handlebar = _handlebar;
        this->suspension = _suspension;
    }

    void wheelie() {
        cout << name << " doing wheelie!" << endl;
    }

    void showSpecs() {
        cout << "Motorcycle: " << name << " " << model << " " << handlebar << " " << suspension << endl;
    }
};

int main() {
    car a("mercedes", "s-class", 4, 4, "manual");
    // bike call
    motorcycle m("Hayabhusa", "19", 2, "Clip-on", "Mono-shock");

    a.engine_st();
    a.start_ac();
    a.engine_stop();
    cout << endl;

    m.engine_st();
    m.showSpecs();
    m.wheelie();
    return 0;
}