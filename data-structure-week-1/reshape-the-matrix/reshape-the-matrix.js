/**
 * @param {number[][]} mat
 * @param {number} r
 * @param {number} c
 * @return {number[][]}
 */
var matrixReshape = function(mat, r, c) {
    let row = mat.length;
    let col = mat[0].length;
    
    let reshapeMatrix = true;
    if(row*col !== r*c) {
        reshapeMatrix = false;
    }
    
    const oArray = [];
    let iArray = [];
    let el = 0;
    
    if(reshapeMatrix) {       
        for(let i=0; i<r; i++) {
            iArray = [];
            for(let j=0; j<c; j++) {
                iArray.push(mat.flat()[el]);
                el++;
            }
            oArray.push(iArray);
        }
        return oArray;
    }
    return mat;
};

