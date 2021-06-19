function sumRange(start, end, factor) {
    const nMultiples = ((start-start%factor)/factor + (end-end%factor)/factor);
    return nMultiples*(nMultiples+1)*factor/2;
}

function Solution() {
    return sumRange(0,999,3)+sumRange(0,999,5)-sumRange(0,999,15)
}
console.log(Solution())

module.exports = Solution