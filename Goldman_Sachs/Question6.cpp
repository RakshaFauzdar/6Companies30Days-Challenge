// RUN_LENGTH_ENCODING
string encode(string src)
{
    int n = src.length();
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        int p = 1;
        while (i < n + 1 && src[i] == src[i + 1])
        {
            p++;
            i++;
        }
        ans += src[i];
        ans += to_string(p);
    }

    return ans;

    // Your code here
}
// TIME COMPLEXITY :O(S) 
// SPACE COMPLEXITY :O(1)
