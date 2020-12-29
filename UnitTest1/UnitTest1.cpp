#include "pch.h"
#include "CppUnitTest.h"
#include "../laba12.2.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Spusok* first = NULL;
			Spusok* last = NULL;
			for (int i = 0; i < 2; i++)
				Create(first, last, i);

			Spusok* T = first;
			int x = 5;
			Process(T, x);

			T = first;
			int l = T->inf;
			Assert::AreEqual(l, 5);
		}
	};
}
