#include "pch.h"
#include "CppUnitTest.h"
#include "../HomeWork/hw-3.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(stringIsPalindromTest)
		{
			Assert::IsTrue(stringIsPalindrom("123321") == true);
			Assert::IsTrue(stringIsPalindrom("fbgdASd2134") == false);
			Assert::IsTrue(stringIsPalindrom("ASb321123bSA") == true);
		}

		TEST_METHOD(stringToIntTest)
		{
			Assert::IsTrue(stringToInt("1234", 5) == 1234);
			Assert::IsTrue(stringToInt("-321", 4) == -321);
			Assert::IsTrue(stringToInt("111", 1) == 111);
			Assert::IsTrue(stringToInt("-1080", 10) == -1080);
		}

		TEST_METHOD(maxLengthRussianWordTest)
		{
			Assert::IsTrue(maxLengthRussianWord("ёжик Победа") == 6);
			Assert::IsTrue(maxLengthRussianWord("мука ёж") == 4);
			Assert::IsTrue(maxLengthRussianWord("конкурс мед блузка") == 7);
		}

		TEST_METHOD(concatenationStringWithDelimitrTest)
		{
			Assert::IsTrue(concatenationStringWithDelimitr(std::vector<std::string> {"aa", "bb", "cc"}, "!") == "aa!bb!cc");
			Assert::IsTrue(concatenationStringWithDelimitr(std::vector<std::string> {"0", "1", "2"}, "+.") == "0+.1+.2");
			Assert::IsTrue(concatenationStringWithDelimitr(std::vector<std::string> {"asd"}, "||") == "asd");
		}
	};
}
