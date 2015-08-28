#include <cmath>

// 100% Correctness + 100% Performance = 100% Task Score
int solution(int X, int Y, int D) 
{        
    return ceil(static_cast<double>(Y - X) / static_cast<double>(D));
}
