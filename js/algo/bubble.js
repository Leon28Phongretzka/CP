function bubbleSort(arr,n)
{
    // for(let i=0; i<n; i++)
    // {
    //     let index = arr[i] * n;
    //     let flr = Math.floor(index);
    //     buckets[flr].push(arr[i]);
    // }
    for(let i=0; i<n; i++)
    {
        for(let j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                let temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        console.log(arr);
    }
    return arr;
}

let arr = new Array(10);
for(let i=0; i<10; i++)
{
    // arr[i] from keyboard
    arr[i] = Math.random()*100;
    arr[i] = Math.floor(arr[i]);
};

// var lines = [];
// require("readline").createInterface({
//   input: process.stdin
// }).on("line", (line) => lines.push(line));
// process.stdin.on("end", () => {
//   main(lines);
// });
// var main = (lines2) => {
//   const x = lines2[1].split(" ").map(Number);
//   for (const xi of x)
//     output(solve(xi));
// };

console.log(arr);

let n = arr.length;
console.log(bubbleSort(arr,n));