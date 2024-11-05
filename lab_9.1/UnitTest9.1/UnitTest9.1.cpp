#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_9.1/sum.h"
#include "../lab_9.1/var.h"
#include "../lab_9.1/dod.h"
#include "../lab_9.1/sum.cpp"
#include "../lab_9.1/var.cpp"
#include "../lab_9.1/dod.cpp.cpp"
using namespace nsDod;
using namespace nsVar;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsSum;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    
    {
    public:

        TEST_METHOD(TestSumFunction)
        {
            nsVar::x = 0.9;
            nsVar::eps = 0.0000001;

            sum();

            Assert::AreEqual(1.47222, nsVar::S, 0.0001);
        }
    };
}
