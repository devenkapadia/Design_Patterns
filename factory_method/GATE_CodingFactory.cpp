#include "GATE_CodingFactory.h"

Evaluator* GATE_CodingFactory::createEvaluator() {
    return new GATE_coding_eval();
}
