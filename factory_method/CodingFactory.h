#ifndef CODINGFACTORY_H
#define CODINGFACTORY_H

#include "ExamFactory.h"

// Factory for creating Coding evaluators
class CodingFactory : public ExamFactory {
public:
    virtual Evaluator* createEvaluator() = 0;
    virtual ~CodingFactory() {}
};

#endif
