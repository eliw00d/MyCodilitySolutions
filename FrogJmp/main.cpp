#include <cmath>

int solution(int X, int Y, int D) 
{        
    return ceil(static_cast<double>(Y - X) / static_cast<double>(D));
}