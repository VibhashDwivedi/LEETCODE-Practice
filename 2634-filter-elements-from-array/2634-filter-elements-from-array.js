/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
     const filteredArray=[]
     x=0;
    for(let i=0;i<arr.length;i++)
        {
            if( fn(arr[i],i)){
                filteredArray[x]= arr[i] 
                x++;
            }
        }
    return filteredArray
};