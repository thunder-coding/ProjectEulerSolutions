function Solution() {
    let x = 1, y = 0;
    let sum = 0;
    while(1){
        [x, y] = [x+y, x]
        if(x >= 4000000) break
        if(x%2 != 1) 
            sum+= x;
    }
    return sum
}
console.log(Solution())

module.exports = Solution