#include "IELTS_EssayFactory.h"

Evaluator* IELTS_EssayFactory::createEvaluator() { return new IELTS_essay_eval(); }