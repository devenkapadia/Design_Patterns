#ifndef IELTS_EVALUATORFACTORY_H
#define IELTS_EVALUATORFACTORY_H

#include "AbstractEvaluatorFactory.h"
#include "../shared/IELTS_library.h"

class IELTS_EvaluatorFactory : public AbstractEvaluatorFactory {
public:
    Evaluator* createMCQ() override;
    Evaluator* createFillin() override;
    Evaluator* createEssay() override;
    Evaluator* createTrueFalse() override;
    Evaluator* createCoding() override;
};

#endif
