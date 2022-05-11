 vector<int> candyStore(int candies[], int N, int k)
    {
        sort(candies,candies+N);
        int sum1 = 0,sum2=0;
        int i = 0,j = N-1;
        
        while(i<=j)
        {
            sum1+=candies[i];
            j-=k;
            i++;
        }
        i=0; j=N-1;
        while(i<=j)
        {
            sum2+=candies[j];
            j--;
            i+=k;
        }

        return {sum1,sum2};
    }
