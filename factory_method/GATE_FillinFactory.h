#ifndef GATE_FILLINFACTORY_H
#define GATE_FILLINFACTORY_H

#include "FillinFactory.h"
#include "../shared/GATE_library.h"

class GATE_FillinFactory : public FillinFactory {
public:
    Evaluator* createEvaluator() override;
};

#endif
