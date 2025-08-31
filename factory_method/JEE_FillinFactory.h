#ifndef JEE_FILLINFACTORY_H
#define JEE_FILLINFACTORY_H

#include "FillinFactory.h"
#include "../shared/JEE_library.h"

class JEE_FillinFactory : public FillinFactory {
public:
    Evaluator* createEvaluator() override;
};

#endif
