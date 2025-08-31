#ifndef EXAMFACTORY_H
#define EXAMFACTORY_H

#include "../shared/Evaluator.h"

// Base factory for creating evaluators of a specific question type
class ExamFactory {
public:
    virtual Evaluator* createEvaluator() = 0;
    virtual ~ExamFactory() {}
};

#endif