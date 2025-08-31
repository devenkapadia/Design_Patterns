CXX = g++
CXXFLAGS = -std=c++11 -Wall

OBJECTS = Factorymethod.o GATE_MCQFactory.o GATE_FillinFactory.o GATE_EssayFactory.o GATE_TrueFalseFactory.o GATE_CodingFactory.o JEE_MCQFactory.o JEE_FillinFactory.o JEE_EssayFactory.o JEE_TrueFalseFactory.o JEE_CodingFactory.o IELTS_MCQFactory.o IELTS_FillinFactory.o IELTS_EssayFactory.o IELTS_TrueFalseFactory.o IELTS_CodingFactory.o GATE_library.o JEE_library.o IELTS_library.o

fm: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o fm.exe $(OBJECTS)

Factorymethod.o: Factorymethod.cpp MCQFactory.h FillinFactory.h EssayFactory.h TrueFalseFactory.h CodingFactory.h GATE_MCQFactory.h GATE_FillinFactory.h GATE_EssayFactory.h GATE_TrueFalseFactory.h GATE_CodingFactory.h JEE_MCQFactory.h JEE_FillinFactory.h JEE_EssayFactory.h JEE_TrueFalseFactory.h JEE_CodingFactory.h IELTS_MCQFactory.h IELTS_FillinFactory.h IELTS_EssayFactory.h IELTS_TrueFalseFactory.h IELTS_CodingFactory.h ../shared/GATE_library.h ../shared/JEE_library.h ../shared/IELTS_library.h
	$(CXX) $(CXXFLAGS) -c Factorymethod.cpp

GATE_MCQFactory.o: GATE_MCQFactory.cpp GATE_MCQFactory.h MCQFactory.h ../shared/GATE_library.h
	$(CXX) $(CXXFLAGS) -c GATE_MCQFactory.cpp

GATE_FillinFactory.o: GATE_FillinFactory.cpp GATE_FillinFactory.h FillinFactory.h ../shared/GATE_library.h
	$(CXX) $(CXXFLAGS) -c GATE_FillinFactory.cpp

GATE_EssayFactory.o: GATE_EssayFactory.cpp GATE_EssayFactory.h EssayFactory.h ../shared/GATE_library.h
	$(CXX) $(CXXFLAGS) -c GATE_EssayFactory.cpp

GATE_TrueFalseFactory.o: GATE_TrueFalseFactory.cpp GATE_TrueFalseFactory.h TrueFalseFactory.h ../shared/GATE_library.h
	$(CXX) $(CXXFLAGS) -c GATE_TrueFalseFactory.cpp

GATE_CodingFactory.o: GATE_CodingFactory.cpp GATE_CodingFactory.h CodingFactory.h ../shared/GATE_library.h
	$(CXX) $(CXXFLAGS) -c GATE_CodingFactory.cpp

JEE_MCQFactory.o: JEE_MCQFactory.cpp JEE_MCQFactory.h MCQFactory.h ../shared/JEE_library.h
	$(CXX) $(CXXFLAGS) -c JEE_MCQFactory.cpp

JEE_FillinFactory.o: JEE_FillinFactory.cpp JEE_FillinFactory.h FillinFactory.h ../shared/JEE_library.h
	$(CXX) $(CXXFLAGS) -c JEE_FillinFactory.cpp

JEE_EssayFactory.o: JEE_EssayFactory.cpp JEE_EssayFactory.h EssayFactory.h ../shared/JEE_library.h
	$(CXX) $(CXXFLAGS) -c JEE_EssayFactory.cpp

JEE_TrueFalseFactory.o: JEE_TrueFalseFactory.cpp JEE_TrueFalseFactory.h TrueFalseFactory.h ../shared/JEE_library.h
	$(CXX) $(CXXFLAGS) -c JEE_TrueFalseFactory.cpp

JEE_CodingFactory.o: JEE_CodingFactory.cpp JEE_CodingFactory.h CodingFactory.h ../shared/JEE_library.h
	$(CXX) $(CXXFLAGS) -c JEE_CodingFactory.cpp

IELTS_MCQFactory.o: IELTS_MCQFactory.cpp IELTS_MCQFactory.h MCQFactory.h ../shared/IELTS_library.h
	$(CXX) $(CXXFLAGS) -c IELTS_MCQFactory.cpp

IELTS_FillinFactory.o: IELTS_FillinFactory.cpp IELTS_FillinFactory.h FillinFactory.h ../shared/IELTS_library.h
	$(CXX) $(CXXFLAGS) -c IELTS_FillinFactory.cpp

IELTS_EssayFactory.o: IELTS_EssayFactory.cpp IELTS_EssayFactory.h EssayFactory.h ../shared/IELTS_library.h
	$(CXX) $(CXXFLAGS) -c IELTS_EssayFactory.cpp

IELTS_TrueFalseFactory.o: IELTS_TrueFalseFactory.cpp IELTS_TrueFalseFactory.h TrueFalseFactory.h ../shared/IELTS_library.h
	$(CXX) $(CXXFLAGS) -c IELTS_TrueFalseFactory.cpp

IELTS_CodingFactory.o: IELTS_CodingFactory.cpp IELTS_CodingFactory.h CodingFactory.h ../shared/IELTS_library.h
	$(CXX) $(CXXFLAGS) -c IELTS_CodingFactory.cpp

GATE_library.o: ../shared/GATE_library.cpp ../shared/GATE_library.h ../shared/Evaluator.h
	$(CXX) $(CXXFLAGS) -c ../shared/GATE_library.cpp

JEE_library.o: ../shared/JEE_library.cpp ../shared/JEE_library.h ../shared/Evaluator.h
	$(CXX) $(CXXFLAGS) -c ../shared/JEE_library.cpp

IELTS_library.o: ../shared/IELTS_library.cpp ../shared/IELTS_library.h ../shared/Evaluator.h
	$(CXX) $(CXXFLAGS) -c ../shared/IELTS_library.cpp

clean:
	del *.o fm.exe