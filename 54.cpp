class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> output;
        int row=matrix.size();
        int col=matrix[0].size();
        int startingrow=0;
        int startingcol=0;
        int endingrow=row-1;
        int endingcol=col-1;
        int count=0;
        int total=row*col;

        while(count<total){

        //printing first row(col first to last col)
        
        for(int j=startingcol;count<total && j<=endingcol;j++){
                output.push_back(matrix[startingrow][j]);
                count++;
        }
            //deleting the first row
        startingrow++;
        
        //printing last col(first row to last row)
        for(int i=startingrow;count<total && i<=endingrow;i++){
            output.push_back(matrix[i][endingcol]);
            count++;
        }
        //deleting the last col
        endingcol--;

        //printing the last row
        for(int k=endingcol;count<total && k>=startingcol;k--){
            output.push_back(matrix[endingrow][k]);
            count++;
        }

        //deleting last row
        endingrow--;

        //printing first col
        for(int l=endingrow;count<total && l>=startingrow;l--){
            output.push_back(matrix[l][startingcol]);
            count++;
        }
        //deleting
        startingcol++;
    }
        return output;
    }
};