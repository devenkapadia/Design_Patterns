#ifndef GATE_LIBRARY_H
#define GATE_LIBRARY_H

#include "Evaluator.h"

class GATE_mcq_eval : public Evaluator{
    public:
    void evaluate(const string& expression) override{
        cout << "Evaluated " << expression << " as per Gate mcq question" << endl;
    }
};

class GATE_fillin_eval : public Evaluator{
    public:
    void evaluate(const string& expression) override{
        cout << "Evaluated " << expression << " as per Gate fillin question" << endl;
    }
};

class GATE_essay_eval : public Evaluator{
    public:
    void evaluate(const string& expression) override{
        cout << "Evaluated " << expression << " as per Gate essay question" << endl;
    }
};

class GATE_truefalse_eval : public Evaluator{
    public:
    void evaluate(const string& expression) override{
        cout << "Evaluated " << expression << " as per Gate true false question" << endl;
    }   
};

#endif // GATE_LIBRARY_H