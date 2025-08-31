#include "AbstractEvaluatorFactory.h"
#include "GATE_EvaluatorFactory.h"
#include "JEE_EvaluatorFactory.h"
#include "../shared/GATE_library.h"
#include "../shared/JEE_library.h"

int main() {
    string gate_mcq = "A";
    string gate_fillin = "gate class";
    string gate_essay = "This is how factory method works";
    string gate_truefalse = "True";
    string jee_mcq = "A";
    string jee_fillin = "jee class";
    string jee_essay = "This is how factory method works";
    string jee_truefalse = "False";

    AbstractEvaluatorFactory* gate_factory = new GATE_EvaluatorFactory();
    Evaluator* eval1 = gate_factory->createMCQ();
    eval1->evaluate(gate_mcq); delete eval1;
    Evaluator* eval2 = gate_factory->createFillin();
    eval2->evaluate(gate_fillin); delete eval2;
    Evaluator* eval3 = gate_factory->createEssay();
    eval3->evaluate(gate_essay); delete eval3;
    Evaluator* eval4 = gate_factory->createTrueFalse();
    eval4->evaluate(gate_truefalse); delete eval4;
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
    delete jee_factory;

    return 0;
}
