 int find(vector<int>&arr)
    {
        int maxVal=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>maxVal)
            {
                maxVal=arr[i];
            }
        }
        return maxVal;
    }
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int maxVal=find(arr);
        int secLargest=-1;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!=maxVal&&arr[i]>secLargest)
            {
                secLargest=arr[i];
                
            }
            
        }
        return secLargest;
    }
