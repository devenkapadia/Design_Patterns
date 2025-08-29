#include "Evaluator.h"
#include "GATE_library.h"
#include "JEE_library.h"

class ExamFactory{
    public:
    virtual Evaluator* createEvaluator(const string& questionType) = 0;
    virtual ~ExamFactory(){}
};

class GATE_ExamFactory : public ExamFactory{
    public:
    Evaluator* createEvaluator(const string& questionType) override{
        if(questionType == "mcq"){
            return new GATE_mcq_eval();
        }
        else if(questionType == "fillin"){
            return new GATE_fillin_eval();
        }
        else if(questionType == "essay"){
            return new GATE_essay_eval();
        }
        else if(questionType == "truefalse"){
            return new GATE_truefalse_eval();
        }
        return nullptr;
    }
};

class JEE_ExamFactory : public ExamFactory{
    public:
    Evaluator* createEvaluator(const string& questionType) override{
        if(questionType == "mcq"){
            return new JEE_mcq_eval();
        }
        else if(questionType == "fillin"){
            return new JEE_fillin_eval();
        }   
        else if(questionType == "essay"){
            return new JEE_essay_eval();
        }
        else if(questionType == "truefalse"){
            return new JEE_truefalse_eval();
        }
        return nullptr;
    }
};

int main(){
    string gate_mcq = "A";
    string gate_fillin = "gate class";
    string gate_essay = "This is how factory method works";
    string gate_truefalse = "True";

    string jee_mcq = "A";
    string jee_fillin = "jee class";
    string jee_essay = "This is how factory method works";
    string jee_truefalse = "False";

    ExamFactory* gate_factory = new GATE_ExamFactory();
    Evaluator* gate_mcq_eval = gate_factory->createEvaluator("mcq");

    if(gate_mcq_eval){
        gate_mcq_eval->evaluate(gate_mcq);
    }
    delete gate_mcq_eval;
    delete gate_factory;
    return 0;
}