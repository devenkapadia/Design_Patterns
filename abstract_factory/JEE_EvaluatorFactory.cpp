#include "JEE_EvaluatorFactory.h"

Evaluator* JEE_EvaluatorFactory::createMCQ() { return new JEE_mcq_eval(); }
Evaluator* JEE_EvaluatorFactory::createFillin() { return new JEE_fillin_eval(); }
Evaluator* JEE_EvaluatorFactory::createEssay() { return new JEE_essay_eval(); }
Evaluator* JEE_EvaluatorFactory::createTrueFalse() { return new JEE_truefalse_eval(); }
Evaluator* JEE_EvaluatorFactory::createCoding() { return new JEE_coding_eval(); }
