class Spreadsheet {
public:
    int sp[10001][26];
    set<string> setted;
    Spreadsheet(int rows) {
        
        for(int i=1;i<=rows;i++){
            for(int j=0;j<26;j++){
                sp[i][j]=0;
            }
        }
    }
    int map(char str){
        return str-'A';
    }
    void setCell(string cell, int value) {
        int col=map(cell[0]);
        int row=stoi(cell.substr(1));
        sp[row][col]=value;
        
        setted.insert(cell);
        
    }
    
    void resetCell(string cell) {
        int col=map(cell[0]);
        int row=stoi(cell.substr(1));
        sp[row][col]=0;
        setted.erase(cell);
    }
    
    int getValue(string formula) {
        int pos=0;
        for(int i=0;i<formula.size();i++){
            if(formula[i]=='+')
                pos=i;
        }
        string first=formula.substr(1,pos-1);
        string second=formula.substr(pos+1);
        int num1=0, num2=0; 
        if(first[0]>='A'&& first[0]<='Z'){
            if(setted.find(first)==setted.end()){
                num1=0;
                
            }
             else{
                 char col_str=first[0];
            int col=map(col_str);
            int row=stoi(first.substr(1));
            num1=sp[row][col];
             }   
            
            
        }
        else
            num1=stoi(first);
        if(second[0]>='A'&& second[0]<='Z'){
            if(setted.find(second)==setted.end()){
                num2=0;
                
            }
            else{
                char col_str=second[0];
            int col=map(col_str);
            int row=stoi(second.substr(1));
            num2=sp[row][col];
            }
                
            
        }
        else
            num2=stoi(second);
        return num1+num2;
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */