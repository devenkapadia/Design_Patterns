#ifndef GATE_EVALUATORFACTORY_H
#define GATE_EVALUATORFACTORY_H

#include "AbstractEvaluatorFactory.h"
#include "../shared/GATE_library.h"

class GATE_EvaluatorFactory : public AbstractEvaluatorFactory {
public:
    Evaluator* createMCQ() override;
    Evaluator* createFillin() override;
    Evaluator* createEssay() override;
    Evaluator* createTrueFalse() override;
};

#endif
