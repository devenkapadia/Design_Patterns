#ifndef JEE_LIBRARY_H
#define JEE_LIBRARY_H

#include "Evaluator.h"

class JEE_mcq_eval : public Evaluator{
    public:
    void evaluate(const string& expression) override{
        cout << "Evaluated " << expression << " as per JEE mcq question" << endl;
    }
};

class JEE_fillin_eval : public Evaluator{
    public:
    void evaluate(const string& expression) override{
        cout << "Evaluated " << expression << " as per JEE fillin question" << endl;
    }
};

class JEE_essay_eval : public Evaluator{
    public:
    void evaluate(const string& expression) override{
        cout << "Evaluated " << expression << " as per JEE essay question" << endl;
    }
};

class JEE_truefalse_eval : public Evaluator{
    public:
    void evaluate(const string& expression) override{
        cout << "Evaluated " << expression << " as per JEE true false question" << endl;
    }
};

#endif // JEE_LIBRARY_H

