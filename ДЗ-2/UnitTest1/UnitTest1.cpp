#include "pch.h"
#include "CppUnitTest.h"
#include "../HomeWork/date.h"
#include "../HomeWork/hw-2.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

const double eps = 1e-5;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(nextDateTest)
		{
			int year = 4;
			Month mon = Month::FEB;
			Day day = 29;
			nextDate(year, mon, day);
			Assert::AreEqual(1, day);

			year = 400;
			mon = Month::FEB;
			day = 28;
			nextDate(year, mon, day);
			Assert::AreEqual(29, day);

			year = 1900;
			mon = Month::AUG;
			day = 5;
			nextDate(year, mon, day);
			Assert::AreEqual(6, day);
		}

		TEST_METHOD(convertToMetersTest)
		{
			Assert::IsTrue(abs(convertToMeters(1, 10) - 1) < eps);
			Assert::IsTrue(abs(convertToMeters(2, 1) - 1000) < eps);
			Assert::IsTrue(abs(convertToMeters(3, 5) - 5) < eps);
			Assert::IsTrue(abs(convertToMeters(4, 2000) - 2) < eps);
			Assert::IsTrue(abs(convertToMeters(5, 100) - 1) < eps);
		}

		TEST_METHOD(findFirstAndLastEvenNumberTest)
		{
			std::tuple<int, int> res = findFirstAndLastEvenNumber(std::array<int, 5> { 0, 1, 2, 3, 4});
			Assert::AreEqual(0, std::get<0>(res));
			Assert::AreEqual(4, std::get<1>(res));

			res = findFirstAndLastEvenNumber(std::array<int, 5> { -1, 1, 2, 3, 5});
			Assert::AreEqual(2, std::get<0>(res));
			Assert::AreEqual(2, std::get<1>(res));

			res = findFirstAndLastEvenNumber(std::array<int, 5> { -1, 1, 17, -33, 5});
			Assert::AreEqual(-1, std::get<0>(res));
			Assert::AreEqual(-1, std::get<1>(res));
		}
	};
}