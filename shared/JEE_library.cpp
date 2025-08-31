#include "JEE_library.h"

void JEE_mcq_eval::evaluate(const string& expression) {
    cout << "Evaluated " << expression << " as per JEE mcq question" << endl;
}

void JEE_fillin_eval::evaluate(const string& expression) {
    cout << "Evaluated " << expression << " as per JEE fillin question" << endl;
}

void JEE_essay_eval::evaluate(const string& expression) {
    cout << "Evaluated " << expression << " as per JEE essay question" << endl;
}

void JEE_truefalse_eval::evaluate(const string& expression) {
    cout << "Evaluated " << expression << " as per JEE true false question" << endl;
}