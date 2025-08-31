#ifndef JEE_EVALUATORFACTORY_H
#define JEE_EVALUATORFACTORY_H

#include "AbstractEvaluatorFactory.h"
#include "../shared/JEE_library.h"

class JEE_EvaluatorFactory : public AbstractEvaluatorFactory {
public:
    Evaluator* createMCQ() override;
    Evaluator* createFillin() override;
    Evaluator* createEssay() override;
    Evaluator* createTrueFalse() override;
    Evaluator* createCoding() override;
};

#endif
