#include "MCQFactory.h"
#include "FillinFactory.h"
#include "EssayFactory.h"
#include "TrueFalseFactory.h"
#include "CodingFactory.h"
#include "GATE_MCQFactory.h"
#include "GATE_FillinFactory.h"
#include "GATE_EssayFactory.h"
#include "GATE_TrueFalseFactory.h"
#include "GATE_CodingFactory.h"
#include "JEE_MCQFactory.h"
#include "JEE_FillinFactory.h"
#include "JEE_EssayFactory.h"
#include "JEE_TrueFalseFactory.h"
#include "JEE_CodingFactory.h"
#include "IELTS_MCQFactory.h"
#include "IELTS_FillinFactory.h"
#include "IELTS_EssayFactory.h"
#include "IELTS_TrueFalseFactory.h"
#include "IELTS_CodingFactory.h"
#include "../shared/GATE_library.h"
#include "../shared/JEE_library.h"
#include "../shared/IELTS_library.h"

int main() {
    string gate_mcq = "A";
    string gate_fillin = "gate class";
    string gate_essay = "This is how factory method works";
    string gate_truefalse = "True";
    string gate_coding = "int main()";
    string jee_mcq = "A";
    string jee_fillin = "jee class";
    string jee_essay = "This is how factory method works";
    string jee_truefalse = "False";
    string jee_coding = "int main()";
    string ielts_mcq = "C";
    string ielts_fillin = "ielts class";
    string ielts_essay = "This is how IELTS evaluates essays";
    string ielts_truefalse = "True";
    string ielts_coding = "int main()";

    // GATE evaluators
    MCQFactory* gate_mcq_factory = new GATE_MCQFactory();
    Evaluator* gate_eval1 = gate_mcq_factory->createEvaluator();
    gate_eval1->evaluate(gate_mcq); delete gate_eval1;
    delete gate_mcq_factory;

    FillinFactory* gate_fillin_factory = new GATE_FillinFactory();
    Evaluator* gate_eval2 = gate_fillin_factory->createEvaluator();
    gate_eval2->evaluate(gate_fillin); delete gate_eval2;
    delete gate_fillin_factory;

    EssayFactory* gate_essay_factory = new GATE_EssayFactory();
    Evaluator* gate_eval3 = gate_essay_factory->createEvaluator();
    gate_eval3->evaluate(gate_essay); delete gate_eval3;
    delete gate_essay_factory;

    TrueFalseFactory* gate_tf_factory = new GATE_TrueFalseFactory();
    Evaluator* gate_eval4 = gate_tf_factory->createEvaluator();
    gate_eval4->evaluate(gate_truefalse); delete gate_eval4;
    delete gate_tf_factory;

    CodingFactory* gate_coding_factory = new GATE_CodingFactory();
    Evaluator* gate_eval5 = gate_coding_factory->createEvaluator();
    gate_eval5->evaluate(gate_coding); delete gate_eval5;
    delete gate_coding_factory;

    // JEE evaluators
    MCQFactory* jee_mcq_factory = new JEE_MCQFactory();
    Evaluator* jee_eval1 = jee_mcq_factory->createEvaluator();
    jee_eval1->evaluate(jee_mcq); delete jee_eval1;
    delete jee_mcq_factory;

    FillinFactory* jee_fillin_factory = new JEE_FillinFactory();
    Evaluator* jee_eval2 = jee_fillin_factory->createEvaluator();
    jee_eval2->evaluate(jee_fillin); delete jee_eval2;
    delete jee_fillin_factory;

    EssayFactory* jee_essay_factory = new JEE_EssayFactory();
    Evaluator* jee_eval3 = jee_essay_factory->createEvaluator();
    jee_eval3->evaluate(jee_essay); delete jee_eval3;
    delete jee_essay_factory;

    TrueFalseFactory* jee_tf_factory = new JEE_TrueFalseFactory();
    Evaluator* jee_eval4 = jee_tf_factory->createEvaluator();
    jee_eval4->evaluate(jee_truefalse); delete jee_eval4;
    delete jee_tf_factory;

    CodingFactory* jee_coding_factory = new JEE_CodingFactory();
    Evaluator* jee_eval5 = jee_coding_factory->createEvaluator();
    jee_eval5->evaluate(jee_coding); delete jee_eval5;
    delete jee_coding_factory;

    // IELTS evaluators
    MCQFactory* ielts_mcq_factory = new IELTS_MCQFactory();
    Evaluator* ielts_eval1 = ielts_mcq_factory->createEvaluator();
    ielts_eval1->evaluate(ielts_mcq); delete ielts_eval1;
    delete ielts_mcq_factory;

    FillinFactory* ielts_fillin_factory = new IELTS_FillinFactory();
    Evaluator* ielts_eval2 = ielts_fillin_factory->createEvaluator();
    ielts_eval2->evaluate(ielts_fillin); delete ielts_eval2;
    delete ielts_fillin_factory;

    EssayFactory* ielts_essay_factory = new IELTS_EssayFactory();
    Evaluator* ielts_eval3 = ielts_essay_factory->createEvaluator();
    ielts_eval3->evaluate(ielts_essay); delete ielts_eval3;
    delete ielts_essay_factory;

    TrueFalseFactory* ielts_tf_factory = new IELTS_TrueFalseFactory();
    Evaluator* ielts_eval4 = ielts_tf_factory->createEvaluator();
    ielts_eval4->evaluate(ielts_truefalse); delete ielts_eval4;
    delete ielts_tf_factory;

    CodingFactory* ielts_coding_factory = new IELTS_CodingFactory();
    Evaluator* ielts_eval5 = ielts_coding_factory->createEvaluator();
    ielts_eval5->evaluate(ielts_coding); delete ielts_eval5;
    delete ielts_coding_factory;

    return 0;
}