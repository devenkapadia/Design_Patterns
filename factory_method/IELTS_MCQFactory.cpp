#include "IELTS_MCQFactory.h"

Evaluator* IELTS_MCQFactory::createEvaluator() { return new IELTS_mcq_eval(); }