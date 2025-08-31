#include "GATE_MCQFactory.h"

Evaluator* GATE_MCQFactory::createEvaluator() {
    return new GATE_mcq_eval();
}
