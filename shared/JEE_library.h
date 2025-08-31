#ifndef JEE_LIBRARY_H
#define JEE_LIBRARY_H

#include "Evaluator.h"

class JEE_mcq_eval : public Evaluator {
public:
    void evaluate(const string& expression) override;
};

class JEE_fillin_eval : public Evaluator {
public:
    void evaluate(const string& expression) override;
};

class JEE_essay_eval : public Evaluator {
public:
    void evaluate(const string& expression) override;
};

class JEE_truefalse_eval : public Evaluator {
public:
    void evaluate(const string& expression) override;
};

#endif 