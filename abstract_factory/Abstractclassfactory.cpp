#include "AbstractEvaluatorFactory.h"
#include "GATE_EvaluatorFactory.h"
#include "JEE_EvaluatorFactory.h"
#include "IELTS_EvaluatorFactory.h"
#include "../shared/GATE_library.h"
#include "../shared/JEE_library.h"
#include "../shared/IELTS_library.h"

int main() {
    string gate_mcq = "A";
    string gate_fillin = "gate class";
    string gate_essay = "This is how factory method works";
    string gate_truefalse = "True";
    string gate_coding = "find min k";

    string jee_mcq = "A";
    string jee_fillin = "jee class";
    string jee_essay = "This is how factory method works";
    string jee_truefalse = "False";
    string jee_coding = "find max k";

    string ielts_mcq = "A";
    string ielts_fillin = "ielts class";
    string ielts_essay = "This is how factory method works";
    string ielts_truefalse = "False";
    string ielts_coding = "dummy";

    AbstractEvaluatorFactory* gate_factory = new GATE_EvaluatorFactory();
    Evaluator* eval1 = gate_factory->createMCQ();
    eval1->evaluate(gate_mcq); delete eval1;
    Evaluator* eval2 = gate_factory->createFillin();
    eval2->evaluate(gate_fillin); delete eval2;
    Evaluator* eval3 = gate_factory->createEssay();
    eval3->evaluate(gate_essay); delete eval3;
    Evaluator* eval4 = gate_factory->createTrueFalse();
    eval4->evaluate(gate_truefalse); delete eval4;
    Evaluator* eval9 = gate_factory->createCoding();
    eval4->evaluate(gate_coding); delete eval9;
    delete gate_factory;

    AbstractEvaluatorFactory* jee_factory = new JEE_EvaluatorFactory();
    Evaluator* eval5 = jee_factory->createMCQ();
    eval5->evaluate(jee_mcq); delete eval5;
    Evaluator* eval6 = jee_factory->createFillin();
    eval6->evaluate(jee_fillin); delete eval6;
    Evaluator* eval7 = jee_factory->createEssay();
    eval7->evaluate(jee_essay); delete eval7;
    Evaluator* eval8 = jee_factory->createTrueFalse();
    eval8->evaluate(jee_truefalse); delete eval8;
    Evaluator* eval11 = jee_factory->createCoding();
    eval8->evaluate(jee_coding); delete eval11;
    delete jee_factory;

    AbstractEvaluatorFactory* ielts_factory = new IELTS_EvaluatorFactory();
    Evaluator* eval12 = ielts_factory->createMCQ();
    eval5->evaluate(ielts_mcq); delete eval12;
    Evaluator* eval13 = ielts_factory->createFillin();
    eval6->evaluate(ielts_fillin); delete eval13;
    Evaluator* eval14 = ielts_factory->createEssay();
    eval7->evaluate(ielts_essay); delete eval14;
    Evaluator* eval15 = ielts_factory->createTrueFalse();
    eval8->evaluate(ielts_truefalse); delete eval15;
    Evaluator* eval16 = ielts_factory->createCoding();
    eval8->evaluate(ielts_coding); delete eval16;
    delete ielts_factory;

    return 0;
}
