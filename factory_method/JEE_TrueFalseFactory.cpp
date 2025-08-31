#include "JEE_TrueFalseFactory.h"

Evaluator* JEE_TrueFalseFactory::createEvaluator() {
    return new JEE_truefalse_eval();
}
