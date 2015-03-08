// Tommy Nguyen
// 3.7.15
// Programming Challenge 15-3

#include "ProductionWorker.h"

using namespace std;

class TeamLeader : public ProductionWorker {
private:
    double monthlyBonus;
    double requiredTrainingHours;
    double trainingHours;
public:
    TeamLeader();

    void setMonthlyBonus(double);
    void setRequiredTrainingHours(double);
    void setTrainingHours(double);

    double getMonthlyBonus() const ;
    double getRequiredTrainingHours() const;
    double getTrainingHours() const;

};

TeamLeader::TeamLeader() {
    monthlyBonus = 0.0;
    requiredTrainingHours = 0.0;
    trainingHours = 0.0;
}

void TeamLeader::setMonthlyBonus(double mBonus) {
    monthlyBonus = mBonus;
}

void TeamLeader::setRequiredTrainingHours(double rTrainingHours) {
    requiredTrainingHours = rTrainingHours;
}

void TeamLeader::setTrainingHours(double tHours) {
    trainingHours = tHours;
}

double TeamLeader::getMonthlyBonus() const {
    return monthlyBonus;
}

double TeamLeader::getRequiredTrainingHours() const {
    return requiredTrainingHours;
}

double TeamLeader::getTrainingHours() const {
    return trainingHours;
}
