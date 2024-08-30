// PercolationStats.h
#pragma once

class PercolationStats {
private:
    // Add any private members you need

public:
    // Perform independent trials on an n-by-n grid
    PercolationStats(int n, int trials);

    // Sample mean of percolation threshold
    double mean() const;

    // Sample standard deviation of percolation threshold
    double stddev() const;

    // Low endpoint of 95% confidence interval
    double confidenceLo() const;

    // High endpoint of 95% confidence interval
    double confidenceHi() const;
};
