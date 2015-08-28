#include <limits>

int solution(vector<int> &A) 
{    
    int N = A.size();
    int P = N - 1;
    
    int minDiff = std::numeric_limits<int>::max();
    
    int sum = 0;
    
    for ( int i = 0; i < N; i++ )
    {
        sum += A[i];
    }
    
    int lhs = 0;
    
    for ( int i = 0; i < P; i++ )
    {
        lhs += A[i];
        
        int rhs = sum - lhs;
        
        int diff = abs(lhs - rhs);
        
        if ( diff < minDiff )
        {
            minDiff = diff;
        }
    }
    
    return minDiff;
}