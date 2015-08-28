int solution(vector<int> &A) 
{
	int N = A.size();
	
    int result = 0;    
    
    vector<bool> B(N, false);
    
    int n = 0;
    
    for ( int i = 0; i < N; i++ )
    {
        if ( A[i] <= N && B[A[i] - 1] == false )
        {
            B[A[i] - 1] = true;
			
            ++n;
            
            if ( n == N )
            {
                result = 1;
                break;
            }
        }
    }
    
    return result;
}