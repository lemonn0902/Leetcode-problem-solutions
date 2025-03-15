class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int count=0;
        set<int>unique;
        int num=0;
        int n=digits.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i!=j && j!=k && k!=i){
                        int first=digits[i];
                        int second= digits[j];
                        int third=digits[k];
                        if(first!=0 && third%2==0){
                             num = first * 100 + second * 10 + third;
                            unique.insert(num);
                        }
                    }
                }
            }
        }
        return unique.size();
        
    }
};