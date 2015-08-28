// 100% Correctness + 60% Performance = 77% Task Score
vector<int> solution(int N, vector<int> &A) 
{
    int M = A.size();
    
    vector<int> B(N, 0);
    
    int max = 0;
    
    for ( int i = 0; i < M; i++ )
    {
        if ( A[i] > N )
        {
            B.assign(N, max); // time complexity here is linear, need better solution
        }
        else
        {
            ++B[A[i] - 1];
            
            if ( B[A[i] - 1] > max )
            {
                max = B[A[i] - 1];
            }
        }
    }
    
    return B;
}
