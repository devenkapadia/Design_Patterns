#include "GATE_EvaluatorFactory.h"

Evaluator* GATE_EvaluatorFactory::createMCQ() { return new GATE_mcq_eval(); }
Evaluator* GATE_EvaluatorFactory::createFillin() { return new GATE_fillin_eval(); }
Evaluator* GATE_EvaluatorFactory::createEssay() { return new GATE_essay_eval(); }
Evaluator* GATE_EvaluatorFactory::createTrueFalse() { return new GATE_truefalse_eval(); }
