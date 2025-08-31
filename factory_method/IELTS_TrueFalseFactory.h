#ifndef IELTS_TRUEFALSEFACTORY_H
#define IELTS_TRUEFALSEFACTORY_H

#include "TrueFalseFactory.h"
#include "../shared/IELTS_library.h"

class IELTS_TrueFalseFactory : public TrueFalseFactory {
public:
    Evaluator* createEvaluator() override;
};

#endif