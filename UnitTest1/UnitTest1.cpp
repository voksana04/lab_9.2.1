#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\admin\source\repos\Project_9.2.1\Project_9.2.1\lab_9.2.1.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestFormula1)
        {
            int x = 2, y = 3;
            int expected = MAX(SQR(x) + y + N, x * y * N);  
            int result;

#if N < 5
            result = MAX(SQR(x) + y + N, x * y * N);
#else
            result = MIN(SQR(x) + SQR(y + N), x * y);
#endif

            Assert::AreEqual(expected, result);
        }

        TEST_METHOD(TestFormula2)
        {
#undef N
#define N 6
            int x = 3, y = 4;
            int expected = MIN(SQR(x) + SQR(y + N), x * y);  
            int result;
          
#if N < 5
            result = MAX(SQR(x) + y + N, x * y * N);
#else
            result = MIN(SQR(x) + SQR(y + N), x * y);
#endif

            Assert::AreEqual(expected, result);
        }
    };
}
