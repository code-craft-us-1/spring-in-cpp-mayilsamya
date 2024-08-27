#include "stats.h"
#include <bits/stdc++.h> 
#include <iostream>


stat Statistics::ComputeStatistics(const std::vector<double> statData)
{
    int index = 0;
    double sumOfData = 0;
    double avg = 0;

    for (index = 0; index <= statData.size(); index++)
    {
        sumOfData = sumOfData + statData.at(index);
    }
    avg =  sumOfData / statData.size();
    return stat();
}
