var s = readline().split(" ");
var n = Number(s[0]), l = Number(s[1]);
s = readline().split(" ").map(Number).sort((a, b) => a-b);
 
var maxDif = Math.max(s[0] * 2, (l - s[n-1]) * 2);
for(var i = 1; i < n; i++) {
    maxDif = Math.max(maxDif, s[i] - s[i-1]);
}
 
print(maxDif / 2);