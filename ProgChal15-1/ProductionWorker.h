// Tommy Nguyen
// 3.7.15
// Programming Challenge 15-1

#include "Employee.h"

using namespace std;

class ProductionWorker : public Employee {
    private:
        int shift;
        double hourlyPayRate;
    public:
        ProductionWorker();

        void setShift(int);
        void setHourlyPayRate(double);

        int getShift() const;
        double getHourlyPayRate() const;
};

ProductionWorker::ProductionWorker() {
    shift = 0;
    hourlyPayRate = 0.0;
}

void ProductionWorker::setShift(int s) {
    shift = s;
}

void ProductionWorker::setHourlyPayRate(double h) {
    hourlyPayRate = h;
}

int ProductionWorker::getShift() const {
    return shift;
}

double ProductionWorker::getHourlyPayRate() const {
    return hourlyPayRate;
}

