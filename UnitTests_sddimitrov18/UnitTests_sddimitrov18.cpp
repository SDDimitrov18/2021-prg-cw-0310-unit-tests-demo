#include "pch.h"
#include "CppUnitTest.h"
#include "../number-tools/numberTools.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestssddimitrov18
{
	TEST_CLASS(UnitTestssddimitrov18)
	{
	public:
		// (10; 20]
		// 14 => true
		// 8  => false
		// 10 => false
		// 20 => true
		// 21 => false
		TEST_METHOD(ShouldReturnTrueIfArgumentIsInRange)
		{
			// AAA
			
			//Arrange
			bool result;
			int argument = 17;

			//Act
			result = isNumberInRange(17);

			//Assert
			Assert::AreEqual(true, result);
		}
		TEST_METHOD(ShouldReturnFalseIfArgumentIsOutOfRange)
		{
			bool result;
			int arg = 8;
			result = isNumberInRange(arg);
			Assert::AreEqual(false, result);
		}
		TEST_METHOD(ShouldReturnFalseIfArgumentIsOutOfRange)
		{
			bool result;
			int arg = 10;
			result = isNumberInRange(arg);
			Assert::AreEqual(false, result);
		}
		TEST_METHOD(ShouldReturnTrueIfArgumentIsInRange)
		{
			bool result;
			int arg = 20;
			result = isNumberInRange(arg);
			Assert::AreEqual(true, result);
		}
		TEST_METHOD(ShouldReturnFalseIfArgumentIsOutOfRange)
		{
			bool result;
			int arg = 21;
			result = isNumberInRange(arg);
			Assert::AreEqual(false, result);
		}
	};
}
