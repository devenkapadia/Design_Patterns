#ifndef FILLINFACTORY_H
#define FILLINFACTORY_H

#include "ExamFactory.h"

// Factory for creating Fill-in evaluators
class FillinFactory : public ExamFactory {
public:
    virtual Evaluator* createEvaluator() = 0;
    virtual ~FillinFactory() {}
};

#endif
