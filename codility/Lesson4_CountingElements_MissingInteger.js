function solution(A) {
    let cnt = 0;
    
    A.sort((a,b)=>a-b);
    for (let i=0; i<A.length; i++){
        if (A[i] == cnt+1)  cnt++;
        else if (A[i] > cnt+1) return cnt+1;
    }
    return cnt+1;
}
