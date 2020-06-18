function solution(A) {
    let cnt = 0;
    for (let i=0; i<A.length-1; i++){
        for (let j=i+1; j<A.length; j++){
            if (A[i]==0 && A[j]==1) cnt++;
        }
    }
    return cnt;
}

// 60% O(N**2)


function solution(A) {
    let cnt = 0;
    let idx0 = [];
    for (let i=0; i<A.length; i++){
        if (A[i] == 0) idx0.push(i);    
    }
    
    for (let i=0; i<idx0.length; i++){
        cnt += A.length - (idx0.length - (i+1)) - (idx0[i]+1);
    }
    if (cnt > 1000000000) return -1;
    return cnt;
}

// 100% O(N)
