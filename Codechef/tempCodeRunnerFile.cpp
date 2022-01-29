else
    {
        if (k < 2 || k > n)
            cout << -1 << endl;
        else
        {
            int c = 0;
            for (int i = 0; i < k - 1; i++)
            {
                cout << (i + 1) << " ";
                c = i;
            }
            for (int i = 0; i < n - c - 1; i++)
            {
                cout << (n - i) << " ";
            }
            cout << endl;
        }
    }