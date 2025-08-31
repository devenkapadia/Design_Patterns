#ifndef ABSTRACTEVALUATORFACTORY_H
#define ABSTRACTEVALUATORFACTORY_H

#include "../shared/Evaluator.h"

class AbstractEvaluatorFactory {
public:
    virtual Evaluator* createMCQ() = 0;
    virtual Evaluator* createFillin() = 0;
    virtual Evaluator* createEssay() = 0;
    virtual Evaluator* createTrueFalse() = 0;
    virtual Evaluator* createCoding() = 0;
    virtual ~AbstractEvaluatorFactory() {}
};

#endif
