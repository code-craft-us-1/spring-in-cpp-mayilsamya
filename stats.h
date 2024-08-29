#include <vector>
#include <algorithm>
#include <cmath>
namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
	struct Stats
	{
		float avg;
		float max;
		float min;

	};
	Stats ComputeStatistics(const std::vector<float>& numbers);
}
