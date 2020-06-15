function solution(A) {
    let minDiff = -1;
    let first = 0;
    let second = A.reduce((a, b) => a + b, 0);

    for (let i=0; i<A.length-1; i++){
        first += A[i];
        second -= A[i];
        if (minDiff == -1) minDiff = Math.abs(first - second);
        else minDiff = Math.min(Math.abs(first - second), minDiff);
    }
    return minDiff;
}
