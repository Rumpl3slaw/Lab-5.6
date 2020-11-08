#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 5.6/Lab 5.6.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = h(2, 3);
			Assert::AreEqual(t, 5);
		}
	};
}
