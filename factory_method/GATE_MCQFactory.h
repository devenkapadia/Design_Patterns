#ifndef GATE_MCQFACTORY_H
#define GATE_MCQFACTORY_H

#include "MCQFactory.h"
#include "../shared/GATE_library.h"

class GATE_MCQFactory : public MCQFactory {
public:
    Evaluator* createEvaluator() override;
};

#endif
