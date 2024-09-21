
let arr=[3,2,1,5]

const insert=(arr,temp)=>{

    if(arr.length ==0 || arr[arr.length-1] < temp){
        arr.push(temp);
        return ;
    }
    let temp1=arr.pop();
    insert(arr,temp);
    arr.push(temp1);

}




const sort= (arr)=>{

    if( arr.length === 0) return ;
    
    let temp=arr.pop();
    sort(arr);
    insert(arr, temp)
    return ;

}


sort(arr);
console.log(arr)