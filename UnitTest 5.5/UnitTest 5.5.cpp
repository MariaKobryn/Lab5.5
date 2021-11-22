#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Maria\source\repos\Lab5.5\Lab5.5\Lab5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = 64;
			double depth = 7;
			double c;
			c = pow(2, 6, 1, depth);
			Assert::AreEqual(c, t);
		}
	};
}
