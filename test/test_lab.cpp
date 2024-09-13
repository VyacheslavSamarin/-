#include <gtest/gtest.h>
#include <18.h>

TEST(ProjectTests, Calculate_1)
{

    int res = CalculaitingPlantGrowth(100, 10, 910);

    ASSERT_TRUE(res == 10);
}

TEST(ProjectTests, Calculate_2)
{

    int res = CalculaitingPlantGrowth(10, 5, 10);

    ASSERT_TRUE(res == 1);
}

TEST(ProjectTests, Calculate_3)
{

    int res = CalculaitingPlantGrowth(500, 1, 1001);

    ASSERT_TRUE(res == 3);
}

TEST(ProjectTests, Calculate_4)
{

    int res = CalculaitingPlantGrowth(10, 0, 100);

    ASSERT_TRUE(res == 10);
}

TEST(ProjectTests, Calculate_5)
{

    int res = CalculaitingPlantGrowth(2, 1, 3);

    ASSERT_TRUE(res == 2);
}

TEST(ProjectTests, Calculate_6)
{

    int res = CalculaitingPlantGrowth(100, 99, 1);

    ASSERT_TRUE(res == 1);
}