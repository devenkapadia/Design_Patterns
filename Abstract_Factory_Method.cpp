#include "Evaluator.h"
#include "GATE_library.h"
#include "JEE_library.h"

// Abstract Factory
class EvaluatorFactory {
    public:
        virtual Evaluator* createMCQ() = 0;
        virtual Evaluator* createFillin() = 0;
        virtual Evaluator* createEssay() = 0;
        virtual Evaluator* createTrueFalse() = 0;
        virtual ~EvaluatorFactory() {}
    };
    
class GATEEvaluatorFactory : public EvaluatorFactory {
public:
    Evaluator* createMCQ() override { return new GATE_mcq_eval(); }
    Evaluator* createFillin() override { return new GATE_fillin_eval(); }
    Evaluator* createEssay() override { return new GATE_essay_eval(); }
    Evaluator* createTrueFalse() override { return new GATE_truefalse_eval(); }
};

class JEEEvaluatorFactory : public EvaluatorFactory {
public:
    Evaluator* createMCQ() override { return new JEE_mcq_eval(); }
    Evaluator* createFillin() override { return new JEE_fillin_eval(); }
    Evaluator* createEssay() override { return new JEE_essay_eval(); }
    Evaluator* createTrueFalse() override { return new JEE_truefalse_eval(); }
};
    
int main() {
    EvaluatorFactory* gate_factory = new GATEEvaluatorFactory();
    Evaluator* eval1 = gate_factory->createMCQ();
    eval1->evaluate("A");
    delete eval1;
    delete gate_factory;
    return 0;
}