CXX = g++
CXXFLAGS = -std=c++11 -Wall

OBJECTS = Abstractclassfactory.o GATE_EvaluatorFactory.o JEE_EvaluatorFactory.o GATE_library.o JEE_library.o

af: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o af.exe $(OBJECTS)

Abstractclassfactory.o: Abstractclassfactory.cpp AbstractEvaluatorFactory.h GATE_EvaluatorFactory.h JEE_EvaluatorFactory.h ../shared/GATE_library.h ../shared/JEE_library.h
	$(CXX) $(CXXFLAGS) -c Abstractclassfactory.cpp

GATE_EvaluatorFactory.o: GATE_EvaluatorFactory.cpp GATE_EvaluatorFactory.h AbstractEvaluatorFactory.h ../shared/GATE_library.h
	$(CXX) $(CXXFLAGS) -c GATE_EvaluatorFactory.cpp

JEE_EvaluatorFactory.o: JEE_EvaluatorFactory.cpp JEE_EvaluatorFactory.h AbstractEvaluatorFactory.h ../shared/JEE_library.h
	$(CXX) $(CXXFLAGS) -c JEE_EvaluatorFactory.cpp

GATE_library.o: ../shared/GATE_library.cpp ../shared/GATE_library.h ../shared/Evaluator.h
	$(CXX) $(CXXFLAGS) -c ../shared/GATE_library.cpp

JEE_library.o: ../shared/JEE_library.cpp ../shared/JEE_library.h ../shared/Evaluator.h
	$(CXX) $(CXXFLAGS) -c ../shared/JEE_library.cpp

clean:
	del *.o af.exe