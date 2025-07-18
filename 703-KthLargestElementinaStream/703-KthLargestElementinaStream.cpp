// Last updated: 7/1/2025, 9:25:21 PM
class KthLargest {
    int num;
    priority_queue<int, vector<int>, greater<int>> minHeap;
public:

    KthLargest(int k, vector<int>& nums) {
        num=k;
        for(auto ele : nums){
            minHeap.push(ele);
            if(minHeap.size()>k) minHeap.pop();
        }
    }
    
    int add(int val) {
        minHeap.push(val);
        if(minHeap.size()>num) minHeap.pop();
        return minHeap.top();

    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */