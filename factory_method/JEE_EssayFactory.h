#ifndef JEE_ESSAYFACTORY_H
#define JEE_ESSAYFACTORY_H

#include "EssayFactory.h"
#include "../shared/JEE_library.h"

class JEE_EssayFactory : public EssayFactory {
public:
    Evaluator* createEvaluator() override;
};

#endif
