#include "MCQFactory.h"
#include "FillinFactory.h"
#include "EssayFactory.h"
#include "TrueFalseFactory.h"
#include "GATE_MCQFactory.h"
#include "JEE_MCQFactory.h"
#include "GATE_FillinFactory.h"
#include "JEE_FillinFactory.h"
#include "GATE_EssayFactory.h"
#include "JEE_EssayFactory.h"
#include "GATE_TrueFalseFactory.h"
#include "JEE_TrueFalseFactory.h"
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

    // Factory Method Pattern: Group by question type, not by exam type
    
    // MCQ Question Type - can create both GATE and JEE MCQ evaluators
    MCQFactory* gate_mcq_factory = new GATE_MCQFactory();
    MCQFactory* jee_mcq_factory = new JEE_MCQFactory();
    
    Evaluator* gate_mcq_eval = gate_mcq_factory->createEvaluator();
    gate_mcq_eval->evaluate(gate_mcq);
    delete gate_mcq_eval;
    
    Evaluator* jee_mcq_eval = jee_mcq_factory->createEvaluator();
    jee_mcq_eval->evaluate(jee_mcq);
    delete jee_mcq_eval;
    
    // Fill-in Question Type - can create both GATE and JEE Fill-in evaluators
    FillinFactory* gate_fillin_factory = new GATE_FillinFactory();
    FillinFactory* jee_fillin_factory = new JEE_FillinFactory();
    
    Evaluator* gate_fillin_eval = gate_fillin_factory->createEvaluator();
    gate_fillin_eval->evaluate(gate_fillin);
    delete gate_fillin_eval;
    
    Evaluator* jee_fillin_eval = jee_fillin_factory->createEvaluator();
    jee_fillin_eval->evaluate(jee_fillin);
    delete jee_fillin_eval;
    
    // Essay Question Type - can create both GATE and JEE Essay evaluators
    EssayFactory* gate_essay_factory = new GATE_EssayFactory();
    EssayFactory* jee_essay_factory = new JEE_EssayFactory();
    
    Evaluator* gate_essay_eval = gate_essay_factory->createEvaluator();
    gate_essay_eval->evaluate(gate_essay);
    delete gate_essay_eval;
    
    Evaluator* jee_essay_eval = jee_essay_factory->createEvaluator();
    jee_essay_eval->evaluate(jee_essay);
    delete jee_essay_eval;
    
    // True/False Question Type - can create both GATE and JEE True/False evaluators
    TrueFalseFactory* gate_truefalse_factory = new GATE_TrueFalseFactory();
    TrueFalseFactory* jee_truefalse_factory = new JEE_TrueFalseFactory();
    
    Evaluator* gate_truefalse_eval = gate_truefalse_factory->createEvaluator();
    gate_truefalse_eval->evaluate(gate_truefalse);
    delete gate_truefalse_eval;
    
    Evaluator* jee_truefalse_eval = jee_truefalse_factory->createEvaluator();
    jee_truefalse_eval->evaluate(jee_truefalse);
    delete jee_truefalse_eval;
    
    // Clean up factories
    delete gate_mcq_factory;
    delete jee_mcq_factory;
    delete gate_fillin_factory;
    delete jee_fillin_factory;
    delete gate_essay_factory;
    delete jee_essay_factory;
    delete gate_truefalse_factory;
    delete jee_truefalse_factory;

    return 0;
}