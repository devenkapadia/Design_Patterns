#ifndef TRUEFALSEFACTORY_H
#define TRUEFALSEFACTORY_H

#include "ExamFactory.h"

// Factory for creating True/False evaluators
class TrueFalseFactory : public ExamFactory {
public:
    virtual Evaluator* createEvaluator() = 0;
    virtual ~TrueFalseFactory() {}
};

#endif
