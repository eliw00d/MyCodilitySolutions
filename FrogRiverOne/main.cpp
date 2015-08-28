// 100% Correctness + 100% Performance = 100% Task Score
int solution(int X, vector<int> &A)
{
	int N = A.size();
	
    int earliestTime = -1;
    
    vector<bool> B(X, false);
    
    int x = 0;
    
    for ( int i = 0; i < N; i++ )
    {
        if ( A[i] <= X && B[A[i] - 1] == false )
        {
            B[A[i] - 1] = true;
            
            ++x;
            
            if ( x == X )
            {
                earliestTime = i;
				break;
            }
        }
    }
    
    return earliestTime;
}
