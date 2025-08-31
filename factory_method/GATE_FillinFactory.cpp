#include "GATE_FillinFactory.h"

Evaluator* GATE_FillinFactory::createEvaluator() {
    return new GATE_fillin_eval();
}
