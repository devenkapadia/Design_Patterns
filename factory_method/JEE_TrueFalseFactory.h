#ifndef JEE_TRUEFALSEFACTORY_H
#define JEE_TRUEFALSEFACTORY_H

#include "TrueFalseFactory.h"
#include "../shared/JEE_library.h"

class JEE_TrueFalseFactory : public TrueFalseFactory {
public:
    Evaluator* createEvaluator() override;
};

#endif
