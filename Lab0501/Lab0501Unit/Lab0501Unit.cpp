#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/ConsoleApplication1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab0501Unit
{
	TEST_CLASS(Lab0501Unit)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = g(2,0,3);
			Assert::AreEqual(t, 2/5);
		}
	};
}
