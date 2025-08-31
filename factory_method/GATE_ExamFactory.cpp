#include "GATE_ExamFactory.h"

Evaluator* GATE_ExamFactory::createEvaluator(const string& questionType) {
    if (questionType == "mcq") {
        return new GATE_mcq_eval();
    }
    else if (questionType == "fillin") {
        return new GATE_fillin_eval();
    }
    else if (questionType == "essay") {
        return new GATE_essay_eval();
    }
    else if (questionType == "truefalse") {
        return new GATE_truefalse_eval();
    }
    return nullptr;
}