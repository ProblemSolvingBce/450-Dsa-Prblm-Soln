package com.company;

class Solution
{
    public static void sort012(int a[], int n)
    {
        int zero=0,ones=0,twos=0;
        // code here
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                zero++;

            }
            else if(a[i]==1)
            {
                ones++;

            }
            else
            {
                twos++;

            }
        }
        for(int i=0;i<zero;i++)
        {
            a[i]=0;
        }
        for(int i=zero;i<zero+ones;i++)
        {
            a[i]=1;
        }
        for(int i=zero+ones;i<zero+ones+twos;i++)
        {
            a[i]=2;
        }
    }
}