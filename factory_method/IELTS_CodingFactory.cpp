#include "IELTS_CodingFactory.h"

Evaluator* IELTS_CodingFactory::createEvaluator() { return new IELTS_coding_eval(); }