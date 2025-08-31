#ifndef GATE_EXAMFACTORY_H
#define GATE_EXAMFACTORY_H

#include "ExamFactory.h"
#include "../shared/GATE_library.h"

class GATE_ExamFactory : public ExamFactory {
public:
    Evaluator* createEvaluator(const string& questionType) override;
};

#endif