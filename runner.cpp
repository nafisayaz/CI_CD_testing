/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_Test_init = false;
#include "test.h"

static Test suite_Test;

static CxxTest::List Tests_Test = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_Test( "test.h", 6, "Test", suite_Test, Tests_Test );

static class TestDescription_suite_Test_testAddition : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test_testAddition() : CxxTest::RealTestDescription( Tests_Test, suiteDescription_Test, 9, "testAddition" ) {}
 void runTest() { suite_Test.testAddition(); }
} testDescription_suite_Test_testAddition;

static class TestDescription_suite_Test_test_addfunction : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test_test_addfunction() : CxxTest::RealTestDescription( Tests_Test, suiteDescription_Test, 13, "test_addfunction" ) {}
 void runTest() { suite_Test.test_addfunction(); }
} testDescription_suite_Test_test_addfunction;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
