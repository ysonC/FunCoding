for (int j = i-1;  j >= 0; j--)
            {
                tmp = store [j];
                store [j] = store[i-2];
                store [i-2] = tmp;
            }