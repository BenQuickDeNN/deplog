int main()
{
    int A[10];
	const int N = 10;
	int i;
    #pragma deplog
    for (i = 0; i < N; i++)
    {
        A[i] = A[i];
    }
    #pragma enddep
    return 0;
}
