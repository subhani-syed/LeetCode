class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int val = image[sr][sc];
        fill(image,sr,sc,color,val);
        return image;
    }
    
    void fill(vector<vector<int>>&img,int sr,int sc,int clr ,int val){
        if( sr<0 ||sr>=img.size() || sc<0||sc>=img[0].size() || img[sr][sc]!=val || img[sr][sc]==clr ){
            return;
        }else{
            img[sr][sc] = clr;
            fill(img,sr-1,sc,clr,val);
            fill(img,sr+1,sc,clr,val);
            fill(img,sr,sc-1,clr,val);
            fill(img,sr,sc+1,clr,val);
        }
    }
};
// //         if in bounds then fill the present pixel
// //         then call the function on the all four adjacent pixels
