
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
		void test_gragh_highest(void)
		{
			std::vector<int>v_int_highest_point = {11, 21, 31, 41, 51, 61, 71, 17, 16, 15, 14, 13, 12};
			TS_ASSERT_EQUALS(graph(v_int_highest_point.begin(), v_int_highest_point.end(), [](int const& x, int const& y){
				return x > y;
			}), 71);
		}
		void test_gragh_lowest(void)
		{
			std::vector<int>v_int_lowest_point = { 17, 16, 15, 14, 13, 12, 11, 21, 31, 41, 51, 61, 71};
			TS_ASSERT_EQUALS(graph(v_int_lowest_point.begin(), v_int_lowest_point.end(), [](int const& x, int const& y){
				return x < y;
			}), 11);
		}
};



