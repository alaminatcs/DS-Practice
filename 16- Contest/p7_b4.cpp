#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int size = s.size();
        if (size % 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            int one = 0, zero = 0;
            for (auto ch : s)
            {
                if (ch == '0')
                {
                    zero++;
                }
                else
                {
                    one++;
                }
            }
            if (zero != one)
            {
                cout << "NO\n";
            }
            else
            {
                stack<char> st;
                for (auto ch : s)
                {
                    if (ch == '0')
                    {
                        st.push(ch);
                    }
                    else
                    {
                        if (!st.empty() && st.top() == '0')
                        {
                            st.pop();
                        }
                    }
                }
                if (st.empty())
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}