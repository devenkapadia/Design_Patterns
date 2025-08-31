#include "GATE_library.h"

void GATE_mcq_eval::evaluate(const string& expression) {
    cout << "Evaluated " << expression << " as per Gate mcq question" << endl;
}

void GATE_fillin_eval::evaluate(const string& expression) {
    cout << "Evaluated " << expression << " as per Gate fillin question" << endl;
}

void GATE_essay_eval::evaluate(const string& expression) {
    cout << "Evaluated " << expression << " as per Gate essay question" << endl;
}

void GATE_truefalse_eval::evaluate(const string& expression) {
    cout << "Evaluated " << expression << " as per Gate true false question" << endl;
}