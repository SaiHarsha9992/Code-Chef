def find_min_X(N, M):
    P = 2 * M + 1
    if N <= M:
        # Minimal X to be sure of the correct path is N + M
        return -1
    else:
        # If liars can potentially outnumber truth-tellers, it's impossible to guarantee
        return P

# Reading input
T = int(input())
for _ in range(T):
    N, M = map(int, input().split())
    result = find_min_X(N, M)
    print(result)
