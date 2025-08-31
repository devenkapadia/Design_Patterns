#include "JEE_FillinFactory.h"

Evaluator* JEE_FillinFactory::createEvaluator() {
    return new JEE_fillin_eval();
}
