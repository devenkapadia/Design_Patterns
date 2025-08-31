#ifndef IELTS_FILLINFACTORY_H
#define IELTS_FILLINFACTORY_H

#include "FillinFactory.h"
#include "../shared/IELTS_library.h"

class IELTS_FillinFactory : public FillinFactory {
public:
    Evaluator* createEvaluator() override;
};

#endif