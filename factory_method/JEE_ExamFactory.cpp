#include "JEE_ExamFactory.h"

Evaluator* JEE_ExamFactory::createEvaluator(const string& questionType) {
    if (questionType == "mcq") {
        return new JEE_mcq_eval();
    }
    else if (questionType == "fillin") {
        return new JEE_fillin_eval();
    }
    else if (questionType == "essay") {
        return new JEE_essay_eval();
    }
    else if (questionType == "truefalse") {
        return new JEE_truefalse_eval();
    }
    return nullptr;
}