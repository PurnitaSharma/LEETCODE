class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        arr.sort()
            
        n=len(arr)
        #print(arr)
        for i in range(0,n):
            if(arr[i] >=0):
                low=i+1
                high=n-1
            else:
                if i==0:
                    continue
                    #return False
                else:
                    
                    low=0;
                    high=i-1;
            while(low<=high):
                mid=low+(high-low)//2
               # print(arr[mid])
                #print(arr[i])
                if(arr[mid] == 2*arr[i]):
                    return True
                elif(arr[mid] > 2*arr[i]):
                    high=mid-1
                else:
                    low=mid+1
                
        return False