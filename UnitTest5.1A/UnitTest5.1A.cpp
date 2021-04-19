#include "pch.h"
#include "CppUnitTest.h"
#include "../5.A/Line.h"
#include "../5.A/Line.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51A
{
	TEST_CLASS(UnitTest51A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Line A(3, 5, 2);
			int test = A.function();
			Assert::AreEqual(11, test);

		}
	};
}
