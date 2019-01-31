
#include<iostream>
#include<cxxtest/TestSuite.h>
#include "add.h"

class Test : public CxxTest::TestSuite
{
	public:
		void testAddition(void)
		{
			TS_ASSERT(1 + 1 > 1);
		}
		void test_addfunction(void)
		{
			TS_ASSERT_EQUALS( add(12, 12), 24);
		}
};



