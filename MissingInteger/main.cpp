// 100% Correctness + 100% Performance = 100% Task Score
int solution(vector<int> &A) 
{    
    int N = A.size();
    
    int minPositive = N + 1;
    
    vector<bool> B(N, false);
    
    for ( int i = 0; i < N; i++ )
    {
        if ( A[i] > 0 && A[i] <= N && B[A[i] - 1] == false )
        {
            B[A[i] - 1] = true;
        }
    }
    
    for ( int i = 0; i < N; i++ )
    {
        if ( B[i] == false )
        {
            minPositive = i + 1;
            break;
        }
    }
    
    return minPositive;
}
