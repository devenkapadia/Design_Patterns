#include "GATE_TrueFalseFactory.h"

Evaluator* GATE_TrueFalseFactory::createEvaluator() {
    return new GATE_truefalse_eval();
}
