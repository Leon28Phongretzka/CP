var lines = [];
require("readline").createInterface({
  input: process.stdin
}).on("line", (line) => lines.push(line));
process.stdin.on("end", () => {
  main(lines);
});
var main = (lines2) => {
  const x = lines2[1].split(" ").map(Number);
  for (const xi of x)
    output(solve(xi));
};
var MAXN = 10 ** 6;
var sieve = new Array(MAXN + 1).fill(false);
var primes = [];
for (let i = 2; i < sieve.length; i++) {
  if (sieve[i])
    continue;
  primes.push(i);
  for (let j = i + i; j < sieve.length; j += i) {
    sieve[j] = true;
  }
}
var tprimes = new Set(primes.map((p) => p * p));
var solve = (x) => tprimes.has(x);
var output = (res) => {
  console.log(res ? "YES" : "NO");
};