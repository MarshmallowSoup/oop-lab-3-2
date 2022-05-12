#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab3_2/Liquid.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Liquid l1;
			l1 = Liquid("Water", 1000);
			double expected = 1000;
			double actual = l1.getDensity();
			Assert::AreEqual(expected, actual);
		}
	};
}
