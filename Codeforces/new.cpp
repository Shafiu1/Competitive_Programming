#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    vector<int> element;
    while (--n)
    {
        // cout<<n<<endl;
        int a;
        cin >> a;
        element.push_back(a);
    }
    vector<int> ans;
    i = 0;
    j = n - 1;
    bool flag1 = true, flag2 = true;
    while (i < j)
    {
        cout << i << " " << j << endl;
        if (element[i] < element[i + 1])
        {
            i++;
        }
        else
        {
            if (flag1)
            {
                ans.push_back(i + 1);
                flag1 = false;
            }
        }
        if (element[j] > element[j - 1])
        {
            j--;
        }
        else
        {
            if (flag2)
            {
                ans.push_back(j + 1);
                flag2 = false;
            }
        }
        cout << ans.size();
        if (ans.size() == 2)
            break;
    }
    if (j > i)
    {
        for (int k = i; k < j; k++)
        {
            if (element[k] > element[k + 1])
            {
                continue;
            }
            else
            {
                cout << "no" << endl;
                return 0;
            }
        }
    }
    else if (ans.size() == 2)
    {
        cout << "yes" << endl;
        cout << min(ans[0], ans[1]) << " " << max(ans[0], ans[1]) << endl;
    }
    else
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
    }
    return 0;
}