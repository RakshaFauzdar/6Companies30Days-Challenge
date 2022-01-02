// UGLY_NUMBERS

class Solution
{
public:
    int nthUglyNumber(int n)
    {
        set<long long> s;
        s.insert(1);
        n--;
        while (n--)
        {
            auto it = s.begin();
            long long x = *it;
            s.erase(it);
            s.insert(x * 2);
            s.insert(x * 3);
            s.insert(x * 5);
        }
        return *s.begin();
    }
};

// TIME COMPLEXITY :O(NLOGN);
// SPACE COMPLEXITY:O(N);