#ifndef GATE_LIBRARY_H
#define GATE_LIBRARY_H

#include "Evaluator.h"

class GATE_mcq_eval : public Evaluator {
public:
    void evaluate(const string& expression) override;
};

class GATE_fillin_eval : public Evaluator {
public:
    void evaluate(const string& expression) override;
};

class GATE_essay_eval : public Evaluator {
public:
    void evaluate(const string& expression) override;
};

class GATE_truefalse_eval : public Evaluator {
public:
    void evaluate(const string& expression) override;
};

class GATE_coding_eval : public Evaluator {
public:
    void evaluate(const string& expression) override;
};

#endif