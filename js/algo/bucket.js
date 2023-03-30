function bucketSort(arr,n)
{
    if(n<=0) return;
    let buckets = new Array(n);
    for(let i = 0; i<n; i++) buckets[i] = [];
    
    for(let i=0; i<n; i++)
    {
        let index = arr[i] * n;
        let flr = Math.floor(index);
        buckets[flr].push(arr[i]);
    }

    for(let i=0; i<n; i++)
    {
        buckets[i].sort(function(a,b){return a-b});
    }

    let index = 0;
    for(let i=0; i<n; i++)
    {
        for(let j=0; j<buckets[i].length; j++)
        {
            arr[index++] = buckets[i][j];
        }
    }

    return arr;
}

// implementation

let arr = new Array(10);
for(let i=0; i<10; i++)
{
    // arr[i] from keyboard
    arr[i] = Math.random();

}

console.log(arr);

let n = arr.length;
console.log(bucketSort(arr,n));
