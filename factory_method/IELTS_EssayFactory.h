#ifndef IELTS_ESSAYFACTORY_H
#define IELTS_ESSAYFACTORY_H

#include "EssayFactory.h"
#include "../shared/IELTS_library.h"

class IELTS_EssayFactory : public EssayFactory {
public:
    Evaluator* createEvaluator() override;
};

#endif