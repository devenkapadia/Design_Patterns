#include "JEE_CodingFactory.h"

Evaluator* JEE_CodingFactory::createEvaluator() {
    return new JEE_coding_eval();
}
