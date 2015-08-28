int solution(vector<int> &A) 
{    
    int N = A.size();
    
    int expectedSum = 0;
    
    for ( int i = 1; i <= N + 1; i++ )
    {
        expectedSum += i;
    }
    
    int actualSum = 0;
    
    for ( int i = 0; i < N; i++ )
    {
        actualSum += A[i];
    }
    
    return expectedSum - actualSum;
}