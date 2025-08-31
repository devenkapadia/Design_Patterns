#include "IELTS_FillinFactory.h"

Evaluator* IELTS_FillinFactory::createEvaluator() { return new IELTS_fillin_eval(); }