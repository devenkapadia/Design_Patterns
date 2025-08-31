#include "JEE_MCQFactory.h"

Evaluator* JEE_MCQFactory::createEvaluator() {
    return new JEE_mcq_eval();
}
