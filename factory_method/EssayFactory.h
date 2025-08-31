#ifndef ESSAYFACTORY_H
#define ESSAYFACTORY_H

#include "ExamFactory.h"

// Factory for creating Essay evaluators
class EssayFactory : public ExamFactory {
public:
    virtual Evaluator* createEvaluator() = 0;
    virtual ~EssayFactory() {}
};

#endif
