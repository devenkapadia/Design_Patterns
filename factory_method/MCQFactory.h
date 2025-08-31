#ifndef MCQFACTORY_H
#define MCQFACTORY_H

#include "ExamFactory.h"

// Factory for creating MCQ evaluators
class MCQFactory : public ExamFactory {
public:
    virtual Evaluator* createEvaluator() = 0;
    virtual ~MCQFactory() {}
};

#endif
