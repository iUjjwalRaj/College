else if (find(storage.begin(), storage.end(), sum) != storage.end())
            {
                return false;
            }
            else
            {
                storage.push_back(sum);
                n = sum;
                sum = 0;
            }