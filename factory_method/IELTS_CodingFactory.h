#ifndef IELTS_CODINGFACTORY_H
#define IELTS_CODINGFACTORY_H

#include "CodingFactory.h"
#include "../shared/IELTS_library.h"

class IELTS_CodingFactory : public CodingFactory {
public:
    Evaluator* createEvaluator() override;
};

#endif