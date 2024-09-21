

function reorder(arr,key){

    if(arr.length == 0 || arr[arr.length-1]< key){
        arr.push(key);
        return arr;
    };

    let element=arr.pop();
    arr=reorder(arr,key);
    arr.push(element)
    return arr;
}

console.log(reorder([4,5,6,7],3))