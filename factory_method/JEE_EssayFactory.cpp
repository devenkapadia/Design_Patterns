#include "JEE_EssayFactory.h"

Evaluator* JEE_EssayFactory::createEvaluator() {
    return new JEE_essay_eval();
}
