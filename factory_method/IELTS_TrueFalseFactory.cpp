#include "IELTS_TrueFalseFactory.h"

Evaluator* IELTS_TrueFalseFactory::createEvaluator() { return new IELTS_truefalse_eval(); }