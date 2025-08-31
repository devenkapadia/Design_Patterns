#ifndef JEE_CODINGFACTORY_H
#define JEE_CODINGFACTORY_H

#include "CodingFactory.h"
#include "../shared/JEE_library.h"

class JEE_CodingFactory : public CodingFactory {
public:
    Evaluator* createEvaluator() override;
};

#endif
