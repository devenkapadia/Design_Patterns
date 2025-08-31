CXX = g++
CXXFLAGS = -std=c++11 -Wall

OBJECTS = Factorymethod.o GATE_MCQFactory.o JEE_MCQFactory.o GATE_FillinFactory.o JEE_FillinFactory.o GATE_EssayFactory.o JEE_EssayFactory.o GATE_TrueFalseFactory.o JEE_TrueFalseFactory.o GATE_library.o JEE_library.o

fm: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o fm.exe $(OBJECTS)

Factorymethod.o: Factorymethod.cpp MCQFactory.h FillinFactory.h EssayFactory.h TrueFalseFactory.h GATE_MCQFactory.h JEE_MCQFactory.h GATE_FillinFactory.h JEE_FillinFactory.h GATE_EssayFactory.h JEE_EssayFactory.h GATE_TrueFalseFactory.h JEE_TrueFalseFactory.h ../shared/GATE_library.h ../shared/JEE_library.h
	$(CXX) $(CXXFLAGS) -c Factorymethod.cpp

GATE_MCQFactory.o: GATE_MCQFactory.cpp GATE_MCQFactory.h MCQFactory.h ../shared/GATE_library.h
	$(CXX) $(CXXFLAGS) -c GATE_MCQFactory.cpp

JEE_MCQFactory.o: JEE_MCQFactory.cpp JEE_MCQFactory.h MCQFactory.h ../shared/JEE_library.h
	$(CXX) $(CXXFLAGS) -c JEE_MCQFactory.cpp

GATE_FillinFactory.o: GATE_FillinFactory.cpp GATE_FillinFactory.h FillinFactory.h ../shared/GATE_library.h
	$(CXX) $(CXXFLAGS) -c GATE_FillinFactory.cpp

JEE_FillinFactory.o: JEE_FillinFactory.cpp JEE_FillinFactory.h FillinFactory.h ../shared/JEE_library.h
	$(CXX) $(CXXFLAGS) -c JEE_FillinFactory.cpp

GATE_EssayFactory.o: GATE_EssayFactory.cpp GATE_EssayFactory.h EssayFactory.h ../shared/GATE_library.h
	$(CXX) $(CXXFLAGS) -c GATE_EssayFactory.cpp

JEE_EssayFactory.o: JEE_EssayFactory.cpp JEE_EssayFactory.h EssayFactory.h ../shared/JEE_library.h
	$(CXX) $(CXXFLAGS) -c JEE_EssayFactory.cpp

GATE_TrueFalseFactory.o: GATE_TrueFalseFactory.cpp GATE_TrueFalseFactory.h TrueFalseFactory.h ../shared/GATE_library.h
	$(CXX) $(CXXFLAGS) -c GATE_TrueFalseFactory.cpp

JEE_TrueFalseFactory.o: JEE_TrueFalseFactory.cpp JEE_TrueFalseFactory.h TrueFalseFactory.h ../shared/JEE_library.h
	$(CXX) $(CXXFLAGS) -c JEE_TrueFalseFactory.cpp

GATE_library.o: ../shared/GATE_library.cpp ../shared/GATE_library.h ../shared/Evaluator.h
	$(CXX) $(CXXFLAGS) -c ../shared/GATE_library.cpp

JEE_library.o: ../shared/JEE_library.cpp ../shared/JEE_library.h ../shared/Evaluator.h
	$(CXX) $(CXXFLAGS) -c ../shared/JEE_library.cpp

clean:
	del *.o fm.exe