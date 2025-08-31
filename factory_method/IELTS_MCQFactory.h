#ifndef IELTS_MCQFACTORY_H
#define IELTS_MCQFACTORY_H

#include "MCQFactory.h"
#include "../shared/IELTS_library.h"

class IELTS_MCQFactory : public MCQFactory {
public:
    Evaluator* createEvaluator() override;
};

#endif