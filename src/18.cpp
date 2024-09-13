#include <18.h>

int CalculaitingPlantGrowth(int upSpeed, int downSpeed, int desiredHeight)
{
    int plantGrowth;
    int dayCount;
    dayCount = 0;
    plantGrowth = 0;

    while (true)
    {
        plantGrowth += upSpeed;
        dayCount += 1;
        std::cout << "After day " << dayCount << " -> " << plantGrowth << "\n";
        if (plantGrowth >= desiredHeight)
        {
            break;
        }
        plantGrowth -= downSpeed;
    }

    return dayCount;
}