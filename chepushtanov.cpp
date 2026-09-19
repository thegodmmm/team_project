#include "chepushtanov.h"
#include <cmath>

double kineticEnergy(double m, double v) {
    return (m * v * v) / 2.0;
}

double momentum(double m, double v) {
    return (m * v);
}
