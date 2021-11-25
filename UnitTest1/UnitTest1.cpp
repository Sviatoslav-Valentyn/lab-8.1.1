#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 8.1.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			bool R = Search("TESTQQQ");
			Assert::AreEqual(false, R);
		}
	};
}
