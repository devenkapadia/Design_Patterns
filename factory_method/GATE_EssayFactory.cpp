#include "GATE_EssayFactory.h"

Evaluator* GATE_EssayFactory::createEvaluator() {
    return new GATE_essay_eval();
}
