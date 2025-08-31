#include "IELTS_library.h"

void IELTS_mcq_eval::evaluate(const string& expression) {
    cout << "Evaluated " << expression << " as per IELTS mcq question" << endl;
}

void IELTS_fillin_eval::evaluate(const string& expression) {
    cout << "Evaluated " << expression << " as per IELTS fillin question" << endl;
}

void IELTS_essay_eval::evaluate(const string& expression) {
    cout << "Evaluated " << expression << " as per IELTS essay question" << endl;
}

void IELTS_truefalse_eval::evaluate(const string& expression) {
    cout << "Evaluated " << expression << " as per IELTS true false question" << endl;
}

void IELTS_coding_eval::evaluate(const string& expression) {
    cout << "Evaluated " << expression << " as per IELTS coding question" << endl;
}