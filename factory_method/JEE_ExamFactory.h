#ifndef JEE_EXAMFACTORY_H
#define JEE_EXAMFACTORY_H

#include "ExamFactory.h"
#include "../shared/JEE_library.h"

class JEE_ExamFactory : public ExamFactory {
public:
    Evaluator* createEvaluator(const string& questionType) override;
};

#endif