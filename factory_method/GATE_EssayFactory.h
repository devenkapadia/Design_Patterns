#ifndef GATE_ESSAYFACTORY_H
#define GATE_ESSAYFACTORY_H

#include "EssayFactory.h"
#include "../shared/GATE_library.h"

class GATE_EssayFactory : public EssayFactory {
public:
    Evaluator* createEvaluator() override;
};

#endif
