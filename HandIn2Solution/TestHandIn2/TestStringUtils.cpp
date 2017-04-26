#include <CppUTest/TestHarness.h>
#include <CppUTest/TestHarness_c.h>
extern "C" {
#include "stringUtils.h"
};
TEST_GROUP(StringUtils)
{
	void setup()
	{
	}
	void teardown()
	{
	}
};
TEST(StringUtils, strlen_NULL_Pointer)
{
	CHECK_EQUAL_C_INT(0, strlen(NULL));
}
TEST(StringUtils, strlen_empty_Pointer)
{
	CHECK_EQUAL_C_INT(0, strlen(""));
}
TEST(StringUtils, strlen_ABC)
{
	CHECK_EQUAL_C_INT(3, strlen("ABC"));
}