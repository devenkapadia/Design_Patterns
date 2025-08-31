#ifndef IELTS_LIBRARY_H
#define IELTS_LIBRARY_H

#include "Evaluator.h"

class IELTS_mcq_eval : public Evaluator {
public:
    void evaluate(const string& expression) override;
};

class IELTS_fillin_eval : public Evaluator {
public:
    void evaluate(const string& expression) override;
};

class IELTS_essay_eval : public Evaluator {
public:
    void evaluate(const string& expression) override;
};

class IELTS_truefalse_eval : public Evaluator {
public:
    void evaluate(const string& expression) override;
};

class IELTS_coding_eval : public Evaluator {
public:
    void evaluate(const string& expression) override;
};

#endif 