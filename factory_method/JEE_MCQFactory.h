#ifndef JEE_MCQFACTORY_H
#define JEE_MCQFACTORY_H

#include "MCQFactory.h"
#include "../shared/JEE_library.h"

class JEE_MCQFactory : public MCQFactory {
public:
    Evaluator* createEvaluator() override;
};

#endif
