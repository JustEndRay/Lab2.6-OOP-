#include "pch.h"
#include "CppUnitTest.h"
#include "../Bus.h"
#include "../Bus.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Bus::Car a("uuu", 4, 4);
			int f = a.GetPower();
			Assert::AreEqual(f, 4);
		}
	};
}
