//Find the maximum and minimum element in an array

import java.util.*;
class MaxMin
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int[] num={5,6,7,1,9,3,4};
        int max=num[0];
        int min=num[0];
        for(int i=0;i<num.length;i++)
        {
           if(num[i]>max){
               max=num[i];
        }
        
        else if(num[i]<min){
            min=num[i];
        }
        }
        System.out.println("The minimum array element is:"+" "+ min);
        System.out.println("The maximum array element is:"+" "+ max);
        
    }
}