#include "IELTS_EvaluatorFactory.h"

Evaluator* IELTS_EvaluatorFactory::createMCQ() { return new IELTS_mcq_eval(); }
Evaluator* IELTS_EvaluatorFactory::createFillin() { return new IELTS_fillin_eval(); }
Evaluator* IELTS_EvaluatorFactory::createEssay() { return new IELTS_essay_eval(); }
Evaluator* IELTS_EvaluatorFactory::createTrueFalse() { return new IELTS_truefalse_eval(); }
Evaluator* IELTS_EvaluatorFactory::createCoding() { return new IELTS_coding_eval(); }
