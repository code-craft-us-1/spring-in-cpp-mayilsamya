#include "stats.h"
#include <numeric>
#include <algorithm>

namespace Statistics
{
    Stats ComputeStatistics(const std::vector <float>& numbers)
    {
        Stats computedStats;

        if (numbers.size() == 0)
        {
            computedStats.average = NAN;
            computedStats.max = NAN;
            computedStats.min = NAN;

            return computedStats;
        }

        computedStats.average = std::accumulate(numbers.begin(),numbers.end(),0.0)/numbers.size();

        computedStats.max = *std::max_element(numbers.begin(),numbers.end());

        computedStats.min = *std::min_element(numbers.begin(),numbers.end());

        return computedStats;
    }
}

