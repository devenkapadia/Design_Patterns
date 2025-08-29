#ifndef EVALUATOR_H
#define EVALUATOR_H

#include <iostream>
#include <string>

using namespace std;

class Evaluator{
    public:
    virtual void evaluate(const string& expression) = 0;
    virtual ~Evaluator(){}
};

#endif // EVALUATOR_H