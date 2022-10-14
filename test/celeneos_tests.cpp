#include <celeneos/celeneos.hpp>
#include <gtest/gtest.h>
#include <cstdlib>

TEST(celeneos_tests, basic_test)
{
    ASSERT_EQ(module_name(), "celeneos");
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
