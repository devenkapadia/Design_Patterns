#ifndef GATE_TRUEFALSEFACTORY_H
#define GATE_TRUEFALSEFACTORY_H

#include "TrueFalseFactory.h"
#include "../shared/GATE_library.h"

class GATE_TrueFalseFactory : public TrueFalseFactory {
public:
    Evaluator* createEvaluator() override;
};

#endif
