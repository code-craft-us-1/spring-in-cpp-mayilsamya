#include "stats.h"
#include <bits/stdc++.h> 

Stats Statistics::ComputeStatistics(const std::<double> statData) {
    //Implement statistics here

    double sum = accumulate(statData.begin(), statData.end(), 0.0);

    double avg = sum / statData.size();

    return avg;
}
