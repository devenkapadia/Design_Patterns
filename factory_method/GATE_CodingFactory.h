#ifndef GATE_CODINGFACTORY_H
#define GATE_CODINGFACTORY_H

#include "CodingFactory.h"
#include "../shared/GATE_library.h"

class GATE_CodingFactory : public CodingFactory {
public:
    Evaluator* createEvaluator() override;
};

#endif
