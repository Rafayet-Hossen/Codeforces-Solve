def solve():
    t = int(input())

    for _ in range(t):
        X, Y, N = map(int, input().split())
        Z = X ^ Y

        blocks = []
        pos = 0

        while pos <= N:
            rem = N - pos + 1

            if pos == 0:
                k = rem.bit_length() - 1
            else:
                k = min((pos & -pos).bit_length() - 1,
                        rem.bit_length() - 1)

            size = 1 << k
            left = (pos ^ X) & ~(size - 1)

            blocks.append((left, size, k))
            pos += size

        blocks.sort()

        suffix = 0
        ans = 0

        for left, size, k in reversed(blocks):
            high = ((left >> k) ^ (Z >> k)) << k
            block_sum = (
                size * high
                + size * (size - 1) // 2
                + size
            )

            suffix += block_sum
            ans = max(ans, left + suffix)

        print(ans)


if __name__ == "__main__":
    solve()