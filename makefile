

all: pre_compile compile run

pre_compile:
	cxxtestgen --error-printer -o runner.cpp test.h
compile:
	g++ -o runner -I$CXXTEST runner.cpp


run:
	./runner
