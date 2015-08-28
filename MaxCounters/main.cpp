vector<int> solution(int N, vector<int> &A) 
{
    int M = A.size();
    
    vector<int> B(N, 0);
    
    int max = 0;
    
    for ( int i = 0; i < M; i++ )
    {
        if ( A[i] == N + 1 )
        {
            B.assign(N, max);
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